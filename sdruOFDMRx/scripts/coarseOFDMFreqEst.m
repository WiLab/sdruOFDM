function [ rFreqShifted, estimate ] = coarseOFDMFreqEst( rFrame, tx, estimate)
%#codegen
% coarseOFDMFreqEst: Frequency Correction based on the Schmidl and Cox
% method, utilizing halves of the short preamble from the 802.11a standard
L=tx.FFTLength/2;
P = sum( conj(rFrame(1:L)  ) .* rFrame(1+L:L*2)  ); %Cross-correlate preamble
estimate.phi(estimate.numProcessed) = angle(P); % Determine phase angle between preamble halves
estimate.frequency(estimate.numProcessed) = estimate.phi(estimate.numProcessed)/...
                                            (2*pi*L/tx.samplingFreq); % Convert angle to frequency

% Apply frequency estimate
[ rFreqShifted, estimate  ] = freqCorrectOFDM( tx, estimate, rFrame  );

end

function [ rFreqShifted, estimate  ] = freqCorrectOFDM( tx, estimate, rFrame  )
% freqCorrectOFDM: Apply frequency offset to input signal, this offset can
% be generated through a moving average if enabled

% Enable moving averages for estimates
if tx.enableMA % Average frequency estimates
    if estimate.numProcessed < estimate.numFreqToAverage % Buffer not full
        estimate.frequencyMA(estimate.numProcessed) = mean(estimate.frequency(1:estimate.numProcessed));
    else % Full buffer
        estimate.frequencyMA(estimate.numProcessed) = mean(estimate.frequency(estimate.numProcessed-estimate.numFreqToAverage+1:estimate.numProcessed));
    end
else % Do not use moving average of generated frequency estimates
    estimate.frequencyMA(estimate.numProcessed) = estimate.frequency(estimate.numProcessed);
end

% Apply frequency correction
t = 0: 1/tx.samplingFreq : (length(rFrame)-1)/tx.samplingFreq;
rFreqShifted = exp(1i*estimate.frequencyMA(estimate.numProcessed)*t.').*rFrame;

end
