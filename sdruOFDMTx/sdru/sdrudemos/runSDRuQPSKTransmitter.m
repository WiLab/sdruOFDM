function runSDRuQPSKTransmitter(prmQPSKTransmitter)
%#codegen

%   Copyright 2012 The MathWorks, Inc.

persistent hTx hSDRu
if isempty(hTx)
    % Initialize the components
    % Create and configure the transmitter System object
    hTx = QPSKTransmitter(...
        'UpsamplingFactor', prmQPSKTransmitter.Upsampling, ...
        'MessageLength', prmQPSKTransmitter.MessageLength, ...
        'TransmitterFilterCoefficients',prmQPSKTransmitter.TransmitterFilterCoefficients, ...
        'DataLength', prmQPSKTransmitter.DataLength, ...
        'ScramblerBase', prmQPSKTransmitter.ScramblerBase, ...
        'ScramblerPolynomial', prmQPSKTransmitter.ScramblerPolynomial, ...
        'ScramblerInitialConditions', prmQPSKTransmitter.ScramblerInitialConditions);
    
    % Create and configure the SDRu System object
    hSDRu = comm.SDRuTransmitter('192.168.10.2', ...
        'CenterFrequency',        prmQPSKTransmitter.USRPCenterFrequency, ...
        'Gain',                   prmQPSKTransmitter.USRPGain, ...
        'InterpolationFactor',    prmQPSKTransmitter.USRPInterpolation);
end

currentTime = 0;

%Transmission Process
while currentTime < prmQPSKTransmitter.StopTime
    % Bit generation, modulation and transmission filtering
    data = step(hTx);
    % Data transmission
    step(hSDRu, data);
    % Update simulation time
    currentTime=currentTime+prmQPSKTransmitter.FrameTime;
end

release(hTx);
release(hSDRu);
end