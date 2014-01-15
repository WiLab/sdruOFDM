function sendMessageSDRu(  InterpolationFactor, message, repeats, framesToTxOnStep, numFrames )

useCodegen = true;

enableMA = true;

% System parameters to adjust because of hardware limitation
desiredSamplingFrequency =  5e6;
USRPADCSamplingRate = 100e6;
InterpolationFactor = USRPADCSamplingRate/desiredSamplingFrequency;

[ txOrg, tx ] = generateOFDMSignal_Tx( framesToTxOnStep, enableMA, message );
tx.samplingFreq = desiredSamplingFrequency;% Set desired frequeny
tx.FreqBin = tx.samplingFreq/tx.FFTLength;% Set frequency bin width

for i = 1:repeats
    % Run transmitter
    if useCodegen
        sdruOFDMTransmitterRun_mex(InterpolationFactor, txOrg, numFrames);
    else
        sdruOFDMTransmitterRun(InterpolationFactor, txOrg, numFrames);
    end
    pause(2);
end



end

