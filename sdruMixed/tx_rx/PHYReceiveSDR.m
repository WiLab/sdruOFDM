function recoveredMessage = PHYReceiveSDR(ObjSDRuReceiver, ObjAGC, ObjCRC, ObjPreambleDemod, ObjDataDemod, rx, estimate)
%% Physical Layer
numFrames = 1; % Frames to capture
lastFound = -2; %Flag for found frame, used for dup check
numBuffersProcessed = 0; %Track received data, needed for separate indexing of processed and unprocessed data (processed==preamble found)

messageBits = zeros(numFrames, rx.messageCharacters*7+3);%3 for CRC

% Message string holder
coder.varsize('recoveredMessage', [1, 80], [0 1]);
recoveredMessage = '';



%% Process received data
% Locate frames in buffer and compensate for channel affects
numFrames = 1; % Number of frames to find
while estimate.numProcessed < numFrames
    
    % Get data from USRP
    buffer = step(ObjSDRuReceiver);
    if sum(buffer)==0
        % All zeros from radio (Bug?)
        fprintf('All zeros (Bug?)\n');
        continue;
    end
    
    % Automatic Gain Control
    buffer = step(ObjAGC, buffer);
    
    % Increment processed data index
    numBuffersProcessed = numBuffersProcessed + 1;
    
    %% Find preamble in buffer
    [estimate.delay, estimate.numPeaks] = locateOFDMFrame_sdr( rx.FFTLength, rx.shortPreambleOFDM, buffer);
    
    % Check if frame exists in correct location and whether it's duplicate
    FrameFound = ((estimate.delay + rx.frameLength) < length(buffer) ) &&... %Check if full data frame exists in buffer
        (estimate.delay > -1 ) &&... %Check if preamble located
        ((numBuffersProcessed-lastFound) >= 2 ); %Check if duplicate frame
    
    %% Recover found frame
    if FrameFound
        
        lastFound = numBuffersProcessed;%Flag frame as found so duplicate frames are not processed
        estimate.numProcessed = estimate.numProcessed + 1;%Increment processed found frames
        
        % Extract single frame from input buffer
        rFrame = buffer(estimate.delay + 1 : estimate.delay + rx.frameLength);
        
        % Correct frequency offset
        [ rFreqShifted, estimate ] = coarseOFDMFreqEst_sdr( rFrame, rx, estimate);
        
        % Equalize
        [ RPostEqualizer, ~, estimate] = equalizeOFDM( rFreqShifted, rx, estimate, ObjPreambleDemod, ObjDataDemod );
        
        % Demod subcarriers
        [ ~, estimate, RHard ] = demodOFDMSubcarriers_sdr( RPostEqualizer, rx, estimate );
        
        % Save for later decoding and CRC
        messageBits(estimate.numProcessed,:) = RHard;
        
    end
    
    %% Timeout
    fprintf('%f\n',numBuffersProcessed);
    fprintf('%f\n',rx.timeoutDuration);
    if numBuffersProcessed > rx.timeoutDuration
        fprintf('PHY: Receiver timed out\n');
        recoveredMessage = 'Timeout';
        break;
    end
end



%% Print Messages
for recMessage = 1:estimate.numProcessed % this is usually just 1
    
    % CRC Check
    [msg, err] = step(ObjCRC, messageBits(recMessage,:).'>0);
    
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

