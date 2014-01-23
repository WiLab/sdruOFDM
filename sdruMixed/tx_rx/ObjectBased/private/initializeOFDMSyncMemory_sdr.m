function [estimate, frameBER] = initializeOFDMSyncMemory_sdr( inputBufferLength, numFreqToAverage, tx, printReceivedData,hPreambleDemod, hDataDemod )
%#codegen
% initializeOFDMSyncMemory: Initialize memory for simulation which is returned by
% the main function OFDM80211aReceiver

% Pre-initialize estimates to be saved between numFrames
estimate.phi                = 0;
estimate.delay              = 0; %Additional points needed for sliding buffer 
estimate.numPeaks           = 0; %Additional points needed for sliding buffer
estimate.frequency          = zeros(numFreqToAverage,1);
estimate.phase              = 0;
estimate.frequencyMA        = 0;
estimate.numProcessed       = 0; %Tracking number of processed found numFrames

estimate.inputBufferLength  = inputBufferLength; %Input buffer
estimate.numFreqToAverage   = numFreqToAverage; %Buffer for moving averages of offset estimates
estimate.pilotEqGains       = complex(zeros(tx.numCarriers, hDataDemod.NumSymbols));
estimate.preambleEqGains    = complex(zeros(tx.FFTLength-sum(hPreambleDemod.NumGuardBandCarriers),1));
estimate.message            = zeros(tx.messageCharacters,1);

frameBER = 0; %Save individual received frame BER's

estimate.printReceivedData  = printReceivedData;

end