%% USRP OFDM Transmitter
compileIt = input('Compile[false=0/true=1]?');
useCodegen = true;

% System parameters to adjust because of hardware limitation
desiredSamplingFrequency =  5e6;
USRPADCSamplingRate = 100e6;
InterpolationFactor = USRPADCSamplingRate/desiredSamplingFrequency;

% Signal parameters
framesToTxOnStep = 10; % May have to tune for underflow issues
enableMA = true;% not important for transmitter

% Create signal vector to be transmitted every step call
[ txOrg, tx ] = generateOFDMSignal( framesToTxOnStep, enableMA );
tx.samplingFreq = desiredSamplingFrequency;% Set desired frequeny
tx.FreqBin = tx.samplingFreq/tx.FFTLength;% Set frequency bin width

% Frames to repeat
numFrames = 10;

% Setup transmitter
if compileIt
    disp('Generating code for transmitter');
    %codegen sdruOFDMTransmitterRun -args { InterpolationFactor, txOrg }
    compilesdru('sdruOFDMTransmitterRun','mex','-args', { InterpolationFactor, txOrg, numFrames });
end


for i = 1:10
% Run transmitter
if useCodegen
    sdruOFDMTransmitterRun_mex(InterpolationFactor, txOrg, numFrames);
else
    sdruOFDMTransmitterRun(InterpolationFactor, txOrg, numFrames);
end
pause(2);
end
