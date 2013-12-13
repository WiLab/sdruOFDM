function [estimate, frameBER] = initializeOFDMSyncMemory( numFrames, inputBufferLength, numFreqToAverage, tx, printReceivedData )
% initializeOFDMSyncMemory: Initialize memory for simulation which is returned by
% the main function OFDM80211aReceiver

% Pre-initialize estimates to be saved between numFrames
estimate.phi                = zeros(numFrames,1);
estimate.delay              = zeros(numFrames*4,1); %Additional points needed for sliding buffer 
estimate.numPeaks           = zeros(numFrames*4,1); %Additional points needed for sliding buffer
estimate.frequency          = zeros(numFrames,1);
estimate.phase              = zeros(numFrames,1);
estimate.frequencyMA        = zeros(numFrames,1);
estimate.numProcessed       = 0; %Tracking number of processed found numFrames

estimate.inputBufferLength  = inputBufferLength; %Input buffer
estimate.numFreqToAverage   = numFreqToAverage; %Buffer for moving averages of offset estimates
estimate.pilotEqGains       = complex(zeros(tx.numCarriers, tx.hDataDemod.NumSymbols));
estimate.preambleEqGains    = complex(zeros(tx.FFTLength-sum(tx.hPreambleDemod.NumGuardBandCarriers),1));
estimate.message            = zeros(tx.messageCharacters,1);

estimate.totalFrameBits     = zeros(numFrames,1);
estimate.totalFrameErrors   = zeros(numFrames,1);

frameBER = zeros(numFrames,1); %Save individual received frame BER's

estimate.printReceivedData  = printReceivedData;

end