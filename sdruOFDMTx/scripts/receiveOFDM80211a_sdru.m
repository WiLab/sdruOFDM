function [frameBER, estimate] = receiveOFDM80211a_sdru( tx, offsetCompensationValue, numFrames, useScopes, printReceivedData )
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
hSDRu = comm.SDRuReceiver( '192.168.10.2', ...
    'CenterFrequency',      2.2e9 + offsetCompensationValue, ...
    'DecimationFactor',     DecimationFactor,...
    'FrameLength',          receiveBufferLength,...
    'OutputDataType',       'double',...
    'Gain',                 18);

% Gain control
hAGC = comm.AGC('UpdatePeriod', receiveBufferLength);

% Create demodulators objects
[ hPreambleDemod, hDataDemod ] = createOFDMDemods( tx );

lastFound = -2; %Flag for found frame, used for dup check
numBuffersProcessed = 0; %Track received data, needed for separate indexing of processed and unprocessed data (processed==preamble found)


%% Process received data
% Locate frames in buffer and compensate for channel affects
%for frames = 1 : numFrames
while estimate.numProcessed < numFrames    
    
    numBuffersProcessed = numBuffersProcessed + 1;% Increment processed data index
    
    %buffer = rChannel(windowIndex : windowIndex + estimate.inputBufferLength - 1);% Add incoming samples to buffer
    buffer = step(hSDRu);
    if max(buffer)==0
        % All zeros from radio (Bug?)
        disp('All zeros (Bug?)');
        continue;
    end
    buffer = step(hAGC, buffer);
    
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
        [ frameBER, estimate ] = demodOFDMSubcarriers_sdr( RPostEqualizer, tx, estimate );
        
        % Visualize
        if useScopes
            stepOFDMScopes( ScopehArrayPilot, ScopehArrayPreamble,ScopehSpect,ScopehConstPre,...
                            ScopehConstPost, ScopehTimeFreqEst, buffer, RPostEqualizer, RPreEqualizer, estimate )
        end
        %Just text
        if estimate.printReceivedData && ~useScopes
            fprintf('Found frames: %i\n',int32(estimate.numProcessed));
            fprintf('Averge frame BER: %f\n',frameBER);
            %disp(['MSG: ', estimate.message.']);
        end
        
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

end

