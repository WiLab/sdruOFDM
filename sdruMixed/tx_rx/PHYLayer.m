classdef PHYLayer < handle
    %#codegen
    %TX
    properties
        desiredSamplingFrequency
        InterpolationFactor
        tx
        USRPADCSamplingRate
        pSDRuTransmitter
        DebugFlag = 1;
    end
    
    properties (Constant)
        pReceiveBufferLength = 5120;
        framesToTxOnStep = 1;
    end
    %RX
    properties
        timeoutDuration
        estimate
        ObjPreambleDemod
        ObjDataDemod
        rx
        offsetCompensationValue
        pSDRuReceiver
        pAGC
        pDetect
        numFreqToAverage
        messageBits
    end
    

    methods
        % Construct Object
        function obj = PHYLayer
            
            % System parameters to adjust because of hardware limitation
            obj.desiredSamplingFrequency =  5e6;
            obj.USRPADCSamplingRate = 100e6;
            obj.InterpolationFactor = obj.USRPADCSamplingRate/obj.desiredSamplingFrequency;
            
            [ ~, ~, ~, obj.tx ] = generateOFDMSignal_TX2( 'UnimportantMessage' );
            obj.tx.samplingFreq = obj.desiredSamplingFrequency;% Set desired frequeny
            obj.tx.freqBin = obj.tx.samplingFreq/obj.tx.FFTLength;% Set frequency bin width
            
            
            % Setup transmitter
            obj.pSDRuTransmitter = comm.SDRuTransmitter('192.168.10.2', ...
                'CenterFrequency',      2.2e9, ...
                'InterpolationFactor',  obj.InterpolationFactor,...
                'Gain',                 25);
            
                        
            % Setup Parameters
            [ obj.ObjPreambleDemod, obj.ObjDataDemod, ~, obj.rx ] = generateOFDMSignal;%_TX2('HelloShannon');
            
            obj.rx.receiveBufferLength = ceil( obj.rx.frameLength*4 ); %Size of Buffer of sliding window
            
            obj.rx.DecimationFactor = obj.USRPADCSamplingRate/obj.rx.samplingFreq;
            
            obj.offsetCompensationValue = -73242;% Get from calibration
            %obj.offsetCompensationValue = 60000;% Get from calibration
            
            %Create memory structure to collect measurements for sync algorithms
            [obj.estimate, ~] = initializeOFDMSyncMemory_sdr( obj.rx.receiveBufferLength, obj.numFreqToAverage, obj.rx, false, obj.ObjPreambleDemod, obj.ObjDataDemod );
            
            % Gain control
            obj.pAGC = comm.AGC('UpdatePeriod', obj.pReceiveBufferLength);
            
            % USRP
            obj.pSDRuReceiver = comm.SDRuReceiver( '192.168.10.2', ...
                'CenterFrequency',      2.2e9 + obj.offsetCompensationValue, ...
                'DecimationFactor',     obj.rx.DecimationFactor,...
                'FrameLength',          obj.pReceiveBufferLength,...
                'OutputDataType',       'double',...
                'Gain',                 18);
            
            % CRC
            obj.pDetect = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);
            
            % Timeout info
            buffersPerSecond = (100e6/obj.rx.DecimationFactor)/obj.pReceiveBufferLength;
            obj.timeoutDuration = buffersPerSecond*4;
            
            % Sync Algorithms
            obj.numFreqToAverage = 15; %Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness)
            
            % Soft decisions
            obj.messageBits = zeros(numFrames,obj.rx.messageCharacters*7+3);%3 for CRC
            
            
        end
        
        % Get Messages
        function [recoveredMessage] = Receive(obj)
            
            obj.estimate.numProcessed = 0; % # correct frames found
            numFrames = 1; % Frames to capture
            lastFound = -2; %Flag for found frame, used for dup check
            numBuffersProcessed = 0; %Track received data, needed for separate indexing of processed and unprocessed data (processed==preamble found)
            
            % Message string holder
            coder.varsize('recoveredMessage', [1, 80], [0 1]);
            recoveredMessage = '';
            
            %% Process received data
            % Locate frames in buffer and compensate for channel affects
            while obj.estimate.numProcessed < numFrames
                
                % Get data from USRP
                buffer = step(obj.pSDRuReceiver);
                if sum(buffer)==0
                    % All zeros from radio (Bug?)
                    if obj.DebugFlag ;fprintf('All zeros (Bug?)\n');end;
                    continue;
                end
                
                % Automatic Gain Control
                buffer = step(obj.pAGC, buffer);
                
                % Increment processed data index
                numBuffersProcessed = numBuffersProcessed + 1;
                
                %% Find preamble in buffer
                [obj.estimate.delay, obj.estimate.numPeaks] = locateOFDMFrame_sdr( obj.rx.FFTLength, obj.rx.shortPreambleOFDM, buffer);
                
                % Check if frame exists in correct location and whether it's duplicate
                FrameFound = ((obj.estimate.delay + obj.rx.frameLength) < length(buffer) ) &&... %Check if full data frame exists in buffer
                    (obj.estimate.delay > -1 ) &&... %Check if preamble located
                    ((numBuffersProcessed-lastFound) >= 2 ); %Check if duplicate frame
                
                %% Recover found frame
                if FrameFound
                    
                    lastFound = numBuffersProcessed;%Flag frame as found so duplicate frames are not processed
                    obj.estimate.numProcessed = obj.estimate.numProcessed + 1;%Increment processed found frames
                    
                    % Extract single frame from input buffer
                    rFrame = buffer(obj.estimate.delay + 1 : obj.estimate.delay + obj.rx.frameLength);
                    
                    % Correct frequency offset
                    [ rFreqShifted, obj.estimate ] = coarseOFDMFreqEst_sdr( rFrame, obj.rx, obj.estimate);
                    
                    % Equalize
                    [ RPostEqualizer, ~, obj.estimate] = equalizeOFDM( rFreqShifted, obj.rx, obj.estimate, obj.ObjPreambleDemod, obj.ObjDataDemod );
                    
                    % Demod subcarriers
                    [ ~, obj.estimate, RHard ] = demodOFDMSubcarriers_sdr( RPostEqualizer, obj.rx, obj.estimate );
                    
                    % Save for later decoding and CRC
                    messageBits(obj.estimate.numProcessed,:) = RHard;
                    
                end
                
                %% Timeout
                %fprintf('%f\n',numBuffersProcessed);
                %fprintf('%f\n',timeoutDuration);
                if numBuffersProcessed > obj.timeoutDuration
                    if obj.DebugFlag ;fprintf('PHY| Receiver timed out\n');end;
                    recoveredMessage = 'Timeout';
                    break;
                end
            end
            
            
            
            %% Process Messages
            for recMessage = 1:obj.estimate.numProcessed
                
                % CRC Check
                [msg, err] = step(obj.pDetect, messageBits(recMessage,:).'>0);
                
                if ~err
                    % Convert Bits to characters
                    message = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3)
                    %Remove padding
                    messageEnd = strfind(message,'EOF');
                    if ~isempty(messageEnd)
                        recoveredMessage = message(1:messageEnd(1,1)-1);
                        if obj.DebugFlag ;fprintf('PHY| Message recovered: %s\n',recoveredMessage); end;
                    end
                else
                    if obj.DebugFlag ;fprintf('PHY| CRC Message Failure\n');end;
                    %recoveredMessage = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3)
                    %recoveredMessage = message;
                    %fprintf('Corrupted Message: %s\n',recoveredMessage);
                    recoveredMessage = 'CRC Error';
                end
            end
            
            
        end
        
        % Send Messages
        function Transmit(obj,inputPayloadMessage,numFrames)
            
            [~,~, dataToTx, ~ ] = generateOFDMSignal_TX2(inputPayloadMessage);% create shorter simpler function
            
            % Run transmitter
            if obj.DebugFlag
                fprintf('Transmitting... pew! pew!\n');
                fprintf('TX Message: %s\n',inputPayloadMessage);
            end
            for framesTransmitted = 1:numFrames
                step(obj.pSDRuTransmitter, dataToTx);
                step(obj.pSDRuReceiver);% clean up receive buffer, will be corrupted anyway
            end
           
            obj.pSDRuTransmitter.reset;%stop transmitting? 
        end
        
        % Sense spectrum
        function occupied = Sense(obj)
            
            powerThreshold = 10e10;
            
            counter = 1;
            maxCount = 10;
            energy = zeros(maxCount,1);
            while 1
                % Get data from USRP
                buffer = step(obj.pSDRuReceiver);
                if sum(buffer)==0
                    % All zeros from radio (Bug?)
                    %disp('All zeros (Bug?)');
                    continue;
                end
                
                % Calculate energy is spectrum
                energy(counter) = sum(abs(fft(buffer(1:4096))));
                counter = counter + 1;
                
                % Done sensing, now determine if spectrum is being used
                if counter >= maxCount
                    if sum(energy>powerThreshold)
                        occupied = 1;
                    else
                        occupied = 0;
                    end
                    obj.pSDRuReceiver.reset;
                    return;
                end
                
            end
            
        end
      
        % Do nothing aka waste time
        function Wait(obj,time)
           
            % Calculate how many buffer needed to step through to wait
            % desired time
            timeToFillBuffer = obj.pReceiveBufferLength / obj.desiredSamplingFrequency;
            buffersToProcess = ceil(time/timeToFillBuffer);
            
            for buffer = 1:buffersToProcess
                step(obj.pSDRuReceiver);
            end
            
        end
        
        
    end
end

