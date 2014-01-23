function sdruOFDMTransmitterRun(InterpolationFactor, txOrg, numFrames)
% Setup transmitter
hSDRu = comm.SDRuTransmitter('192.168.10.2', ...
    'CenterFrequency',      2.2e9, ...
    'InterpolationFactor',  InterpolationFactor,...
    'Gain',                 25);

% Run transmitter
disp('Transmitting... pew! pew!');
for framesTransmitted = 1:numFrames
    % Send data to USRP
    step(hSDRu, txOrg);
end

release(hSDRu);