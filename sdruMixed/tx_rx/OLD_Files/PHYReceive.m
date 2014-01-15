
classdef PHYReceive < handle
    %#codegen
    properties
        estimate
        ObjPreambleDemod
        ObjDataDemod
        rx
        offsetCompensationValue
        USRPDACSamplingRate
        pSDRuReceiver
        pAGC
        pDetect
        numFreqToAverage
        
    end
    
    properties (Constant)
        pReceiveBufferLength = 5120;
    end
    
    
    methods
        % Construct Object
        function obj = PHYReceive
            
            % Setup Parameters
            [ obj.ObjPreambleDemod, obj.ObjDataDemod, ~, obj.rx ] = generateOFDMSignal;
            
            obj.rx.receiveBufferLength = ceil( obj.rx.frameLength*4 ); %Size of Buffer of sliding window
            
            obj.USRPDACSamplingRate = 100e6;
            obj.rx.DecimationFactor = obj.USRPDACSamplingRate/obj.rx.samplingFreq;
            
            obj.offsetCompensationValue = -7000;
            
            %Create memory structure to collect measurements for sync algorithms
            obj.numFreqToAverage = 15; %Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness)
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
            
            
        end
        
        % Get Messages
        function [recoveredMessage] = Run(obj)
            
            numFrames = 1; % Frames to capture
            lastFound = -2; %Flag for found frame, used for dup check
            numBuffersProcessed = 0; %Track received data, needed for separate indexing of processed and unprocessed data (processed==preamble found)
            
            messageBits = zeros(numFrames,obj.rx.messageCharacters*7+3);%3 for CRC
            
            % Message string holder
            coder.varsize('recoveredMessage', [1, 80], [0 1]);
            recoveredMessage = '';
            
            % Timeout info
            buffersPerSecond = (100e6/obj.rx.DecimationFactor)/obj.pReceiveBufferLength;
            timeoutDuration = buffersPerSecond*20;
            
            
            %% Process received data
            % Locate frames in buffer and compensate for channel affects
            numFrames = 1; % Number of frames to find
            while obj.estimate.numProcessed < numFrames
                
                % Get data from USRP
                buffer = step(obj.pSDRuReceiver);
                if sum(buffer)==0
                    % All zeros from radio (Bug?)
                    fprintf('All zeros (Bug?)\n');
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
                fprintf('%f\n',numBuffersProcessed);
                fprintf('%f\n',timeoutDuration);
                if numBuffersProcessed > timeoutDuration
                    fprintf('PHY: Receiver timed out\n');
                    recoveredMessage = 'Timeout';
                    break;
                end
            end
            
            
            
            %% Print Messages
            for recMessage = 1:obj.estimate.numProcessed
                
                % CRC Check
                [msg, err] = step(obj.pDetect, messageBits(recMessage,:).'>0);
                
                if ~err
                    %Convert Bits to characters
                    message = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3)
                    %Remove padding
                    messageEnd = strfind(message,'EOF');
                    if ~isempty(messageEnd)
                        recoveredMessage = message(1:messageEnd(1,1)-1);
                        %disp(recoveredMessage);
                    end
                else
                    fprintf('CRC Message Failure\n');
                    recoveredMessage = 'CRC Error';
                end
            end
            
            
        end
        
        % Sense spectrum
        function occupied = Sense(obj)
            
            powerThreshold = 10;
            
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
                    return;
                end
                
            end
            
        end
        
        
        
    end
end

