function FreqCalTx(sinewave,prmFreqCalibTx)

hSDRuTx = comm.SDRuTransmitter( ...
    'IPAddress',            '192.168.10.2', ...
    'CenterFrequency',      prmFreqCalibTx.USRPTxCenterFrequency, ...
    'Gain',                 prmFreqCalibTx.USRPGain,...
    'InterpolationFactor',  prmFreqCalibTx.USRPInterpolationFactor)


%  Loop until the example reaches the target number of frames.
for iFrame = 1: prmFreqCalibTx.TotalFrames
	step(hSDRuTx, sinewave); % transmit to USRP(R) radio
end

%% Release System Objects
release (hSDRuTx);


end
