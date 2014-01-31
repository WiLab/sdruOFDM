function [recoveredMessage] = PHYReceive(...
                ObjAGC,...           %Objects
                ObjSDRuReceiver,...
                ObjDetect,...
                ObjPreambleDemod,...
                ObjDataDemod,...
                estimate,...         %Structs
                rx,...
                timeoutDuration,...  %Values/Vectors
                messageBits...
                )
            
            
%DEBUG
DebugFlag = 0;
%DEBUG

estimate.numProcessed = 0; % # correct frames found
lastFound = -2; %Flag for found frame, used for dup check
numBuffersProcessed = 0; %Track received data, needed for separate indexing of processed and unprocessed data (processed==preamble found)

numFrames = 1;% Frames to capture

% Message string holder
coder.varsize('recoveredMessage', [1, 80], [0 1]);
recoveredMessage = '';

%% Process received data
% Locate frames in buffer and compensate for channel affects
while estimate.numProcessed < numFrames
    
    % Get data from USRP
    buffer = step(ObjSDRuReceiver);
    if sum(buffer)==0
        % All zeros from radio (Bug?)
        if DebugFlag ;fprintf('All zeros (Bug?)\n');end;
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
    %fprintf('%f\n',numBuffersProcessed);
    %fprintf('%f\n',timeoutDuration);
    if numBuffersProcessed > timeoutDuration
        if DebugFlag ;fprintf('PHY| Receiver timed out\n');end;
        recoveredMessage = 'Timeout';
        break;
    end
end



%% Process Messages
for recMessage = 1:estimate.numProcessed
    
    % CRC Check
    [msg, err] = step(ObjDetect, messageBits(recMessage,:).'>0);
    
    if ~err
        % Convert Bits to characters
        message = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3)
        %Remove padding
        messageEnd = strfind(message,'EOF');
        if ~isempty(messageEnd)
            recoveredMessage = message(1:messageEnd(1,1)-1);
            if DebugFlag ;fprintf('PHY| Message recovered: %s\n',recoveredMessage); end;
        end
    else
        if DebugFlag ;fprintf('PHY| CRC Message Failure\n');end;
        %recoveredMessage = char(OFDMbits2letters(msg > 0).');%messageBits(recMessage,1:end-3)
        %recoveredMessage = message;
        %fprintf('Corrupted Message: %s\n',recoveredMessage);
        recoveredMessage = 'CRC Error';
    end
end

end