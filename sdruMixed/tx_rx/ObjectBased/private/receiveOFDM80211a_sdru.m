function [recoveredMessage, err, frameBER, estimate] = receiveOFDM80211a_sdru( tx, offsetCompensationValue, numFrames, useScopes, printReceivedData )
%#codegen
% receiveOFDM80211a: Recover OFDM signal from input data stream and 
% return synchronization estimates and BER values of that recovered data.
% Input signal is assumed to be based upon the IEEE 802.11a standard.
% Inputs:
%   -tx: struct containing transmitter's specifications
%   -offsetCompensationValue: additional carrier offset adjustment value
%   -numFrames: estimated number of frames in rChannel
%   -useScopes: enables scope visuals
%   -printPreceivedData: enables printing of recovered data to command window

persistent ScopehArrayPilot  ScopehArrayPreamble ScopehSpect ScopehConstPre ScopehConstPost ScopehTimePeaks ScopehTimeFreqEst
coder.extrinsic('createOFDMScopes');%Ignore scopes when generating code
coder.extrinsic('exist')
 
%% Setup buffer parameters and system objects
% "buffer" is a window of samples from the input signal "recv".  This
% window is slid across the input signal in order to locate the start of
% frames. The variable "windowSlideDistance" determines the number of
% samples the buffer is slid between iterations. This sliding is not done
% on an individual sample basis for performance reasons. The "buffer"
% itself is set to be larger than a single frame to accommodate this group
% sliding, while still allowing for full individual frame detection.

receiveBufferLength = ceil( tx.frameLength*4 ); %Size of Buffer of sliding window

%Create memory structure to collect measurements for sync algorithms
numFreqToAverage = 15; %Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness)
[estimate, frameBER] = initializeOFDMSyncMemory_sdr( receiveBufferLength, numFreqToAverage, tx, printReceivedData ); 


% Create visualization objects
if useScopes
    [ScopehArrayPilot, ScopehArrayPreamble,...
     ScopehSpect, ScopehConstPre, ScopehConstPost,...
     ScopehTimePeaks, ScopehTimeFreqEst] = createOFDMScopes( tx, numFrames );
end

% Setup USRP
DecimationFactor = 100e6/tx.samplingFreq;
%if ~exist('hSDRu','var')
hSDRu = comm.SDRuReceiver( '192.168.10.2', ...
    'CenterFrequency',      2.2e9 + offsetCompensationValue, ...
    'DecimationFactor',     DecimationFactor,...
    'FrameLength',          receiveBufferLength,...
    'OutputDataType',       'double',...
    'Gain',                 18);
%end
% Gain control
hAGC = comm.AGC('UpdatePeriod', receiveBufferLength);

% Create demodulators objects
[ hPreambleDemod, hDataDemod ] = createOFDMDemods( tx );

lastFound = -2; %Flag for found frame, used for dup check
numBuffersProcessed = 0; %Track received data, needed for separate indexing of processed and unprocessed data (processed==preamble found)

totalBER = 0;

messageBits = zeros(numFrames,tx.messageCharacters*7+3);%3 for CRC

% String holder
coder.varsize('recoveredMessage', [1, 80], [0 1]);
recoveredMessage = '';

% Timeout info
buffersPerSecond = (100e6/DecimationFactor)/receiveBufferLength;
timeoutDuration = buffersPerSecond*20;


%% Process received data
% Locate frames in buffer and compensate for channel affects
%for frames = 1 : numFrames
while estimate.numProcessed < numFrames    
    
    %buffer = rChannel(windowIndex : windowIndex + estimate.inputBufferLength - 1);% Add incoming samples to buffer
    buffer = step(hSDRu);
    if sum(buffer)==0
       % All zeros from radio (Bug?)
       %disp('All zeros (Bug?)');
       continue;
    end
    buffer = step(hAGC, buffer);
    
    numBuffersProcessed = numBuffersProcessed + 1;% Increment processed data index
    
    %% Find preamble in buffer
    [estimate.delay, estimate.numPeaks] = locateOFDMFrame_sdr( tx.FFTLength, tx.shortPreambleOFDM, buffer);

    % Plot timing information  
    if useScopes
        step(ScopehTimePeaks, estimate.numPeaks);
    end
    
    % Check if frame exists in correct location and whether it's duplicate
    FrameFound = ((estimate.delay + tx.frameLength) < length(buffer) ) &&... %Check if full data frame exists in buffer
                 (estimate.delay > -1 ) &&... %Check if preamble located
                 ((numBuffersProcessed-lastFound) >= 2 ); %Check if duplicate frame
    
    %% Recover found frame
    if FrameFound

        lastFound = numBuffersProcessed;%Flag frame as found so duplicate frames are not processed
        estimate.numProcessed = estimate.numProcessed + 1;%Increment processed found frames
        
        % Extract single frame from input buffer
        rFrame = buffer(estimate.delay + 1 : estimate.delay + tx.frameLength);        
               
        % Correct frequency offset
        [ rFreqShifted, estimate ] = coarseOFDMFreqEst_sdr( rFrame, tx, estimate);                 
        % Equalize
        [ RPostEqualizer, RPreEqualizer, estimate] = equalizeOFDM( rFreqShifted, tx, estimate, hPreambleDemod, hDataDemod );
        
        % Demod subcarriers
        [ frameBER, estimate, RHard ] = demodOFDMSubcarriers_sdr( RPostEqualizer, tx, estimate );

        % Visualize
        if useScopes
            stepOFDMScopes( ScopehArrayPilot, ScopehArrayPreamble,ScopehSpect,ScopehConstPre,...
                            ScopehConstPost, ScopehTimeFreqEst, buffer, RPostEqualizer, RPreEqualizer, estimate )
        end
        %Just text
        %if estimate.printReceivedData && ~useScopes
         %   fprintf('Found frames: %i\n',int32(estimate.numProcessed));
         %   fprintf('Averge frame BER: %f\n',frameBER);
         %   %disp(['MSG: ', estimate.message.']);
        %end
	
        messageBits(estimate.numProcessed,:) = RHard;
        totalBER = totalBER + frameBER;
    end
    
    %% Timeout
    if numBuffersProcessed > timeoutDuration
        disp('Receiver timed out');
        recoveredMessage = 'Timeout';
        break;
    end
    
    
   
end


% CRC
hDetect = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);
err = 1>1;

%% Print Messages
for recMessage = 1:estimate.numProcessed
    
    % CRC Check
    [msg, err] = step(hDetect, messageBits(recMessage,:).'>0);
    
    
    if ~err
        %Convert Bits to characters
        message = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3)
        %Remove padding
        messageEnd = strfind(message,'EOF');
        if ~isempty(messageEnd)
            recoveredMessage = message(1:messageEnd(1,1)-1);
            disp(recoveredMessage);
        end
    else
        disp('CRC Message Failure');
        recoveredMessage = 'CRC Error';
    end
end

%% Cleanup

% Release objects
if useScopes
    release(ScopehArrayPilot);
    release(ScopehArrayPreamble);
    release(ScopehSpect);
    release(ScopehConstPre);
    release(ScopehConstPost);
end

release(hSDRu);


% Print Results
%fprintf('Total BER: %f\n',totalBER/estimate.numProcessed);
%fprintf('Total received frames: %f\n',estimate.numProcessed);


end

