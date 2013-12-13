function [ rFreqShifted, estimate ] = coarseOFDMFreqEst_sdr( rFrame, tx, estimate)
%#codegen
% coarseOFDMFreqEst: Frequency Correction based on the Schmidl and Cox
% method, utilizing halves of the short preamble from the 802.11a standard
L=tx.FFTLength/2;
P = sum( conj(rFrame(1:L)  ) .* rFrame(1+L:L*2)  ); %Cross-correlate preamble
estimate.phi = angle(P); % Determine phase angle between preamble halves

if estimate.numProcessed < estimate.numFreqToAverage% Buffer not full
    estimate.frequency(estimate.numProcessed) = estimate.phi/(2*pi*L/tx.samplingFreq); % Convert angle to frequency
else
    estimate.frequency = [estimate.frequency(2:end);0];
    estimate.frequency(end) = estimate.phi/(2*pi*L/tx.samplingFreq);
end

% Apply frequency estimate
[ rFreqShifted, estimate  ] = freqCorrectOFDM( tx, estimate, rFrame  );

end

function [ rFreqShifted, estimate  ] = freqCorrectOFDM( tx, estimate, rFrame  )
% freqCorrectOFDM: Apply frequency offset to input signal, this offset can
% be generated through a moving average if enabled

% Enable moving averages for estimates
if estimate.numProcessed < estimate.numFreqToAverage % Buffer not full
    
    estimate.frequencyMA = mean(estimate.frequency(1:estimate.numProcessed));
    
    % Apply frequency correction
    t = 0: 1/tx.samplingFreq : (length(rFrame)-1)/tx.samplingFreq;
    rFreqShifted = exp(1i*estimate.frequencyMA*t.').*rFrame;
    
else % Full buffer
    
    estimate.frequencyMA = mean(estimate.frequency);
    
    % Apply frequency correction
    t = 0: 1/tx.samplingFreq : (length(rFrame)-1)/tx.samplingFreq;
    rFreqShifted = exp(1i*estimate.frequencyMA*t.').*rFrame;
    
end


end
