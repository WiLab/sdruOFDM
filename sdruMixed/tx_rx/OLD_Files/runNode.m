function runNode(printData)
%#codegen

persistent hRx 
if isempty(hTx)
    % Initialize the components
    % Create and configure the receiver System object
    hRx = NodeRX(...
        'DownsamplingFactor', prmQPSKTxRx.Downsampling, ...
        'CoarseFrequencyCompFFTSize', prmQPSKTxRx.CoarseFrequencyCompFFTSize, ...
        'FrameSize', prmQPSKTxRx.FrameSize, ...
        'MessageLength', prmQPSKTxRx.MessageLength, ...
        'SampleRate', prmQPSKTxRx.Fs, ...
        'PrintOption', printData);  
end

hRx.PrintOption = printData;

for count = 1:prmQPSKTxRx.FrameCount
    transmittedSignal = step(hTx); % Transmitter
    corruptSignal = step(hChan, transmittedSignal, count); % AWGN Channel
    [RCRxSignal,coarseCompBuffer, timingRecBuffer,BER] = step(hRx,corruptSignal); % Receiver
    if useScopes
        stepQPSKScopes(hScopes,RCRxSignal,coarseCompBuffer, timingRecBuffer); % Plots all the scopes
    end
end
if isempty(coder.target)
    release(hTx);
    release(hChan);
    release(hRx);
end
if useScopes
     releaseQPSKScopes(hScopes);
end
