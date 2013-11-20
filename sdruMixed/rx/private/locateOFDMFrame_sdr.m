function [preambleEstimatedLocation, numPeaks ] = locateOFDMFrame_sdr( FFTLength, shortPreambleOFDM, recv)
%#codegen
% locateOFDMFrame: Locate 802.11a based preamble from input data stream.
% It is assumed that the received signal is still in the time domain.  The
% location of the start of the preamble will be returned, if not found -1
% is returned

%% Timing Estimate
windowLength = ceil(length(recv)/4);
L = FFTLength;
K = FFTLength/4; % Quarter of short preamble sequence
known = shortPreambleOFDM(1:K);

% Cross correlate
rWin = recv(1:windowLength-L+K-1);
Phat = xcorr(rWin,conj(known));
Rhat = xcorr(abs(rWin).^2,ones(K,1)); % moving average

% Remove leading and tail zeros overlaps
PhatShort = Phat(ceil(length(Phat)/2):end-K/2+1);
RhatShort = Rhat(ceil(length(Rhat)/2):end-K/2+1);

% Calculate timing metric
M = abs(PhatShort).^2 ./ RhatShort.^2;

% Determine start of short preamble
threshold = 0.6; % peak threshold after normalization (TUNABLE)
[preambleEstimatedLocation, numPeaks] = locateShortpreamble( M, K, threshold );

end


function [preambleEstimatedLocation, numPeaks] = locateShortpreamble( M, K, threshold )
%#codegen
% Locate of the start of the actual preamble from timing metric

%% Find peaks of correlation

% Adjust threshold
thresholdNorm = max(M)*threshold;
MLocations = find(M>thresholdNorm);

% Correct estimate to start of preamble not its center
MLocations = MLocations - (K/2+1);

% Frame Detection
peaks = zeros(size(MLocations));

% Determine correct peak 
desiredPeakLocations = (16:16:128).';
for i = 1:length(MLocations)
    MLocationGuesses = MLocations(i)+desiredPeakLocations;
    peaks(i) = length(intersect(MLocations(i:end),MLocationGuesses));
end

% Have at least 5 peaks for positive match
requiredPeaks = 5; % (TUNABLE)
peaks(peaks < requiredPeaks) = 0;

% Pick earliest peak in time
if ~isempty(peaks)
    [numPeaks, frontPeakLocation] = max(peaks);
    if ~isempty(frontPeakLocation) && ( numPeaks > 0 )
        preambleEstimatedLocation = MLocations(frontPeakLocation);
    else
        preambleEstimatedLocation = -1; % no desirable location found
    end
else
    preambleEstimatedLocation = -1;
    numPeaks = 0;
end
% Normalize max peaks found
numPeaks = numPeaks/numel(desiredPeakLocations);


end
















