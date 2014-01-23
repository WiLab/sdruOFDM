function [recoveredMessage, err, frameBER, estimate] = receivePHY
%#codegen
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
numFrames = 1; % Number of frames to find
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

        % Save for later decoding and CRC
        messageBits(estimate.numProcessed,:) = RHard;
        totalBER = totalBER + frameBER;
    end
    
    %% Timeout
    if numBuffersProcessed > timeoutDuration
        disp('PHY: Receiver timed out');
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



end

