%% USRP OFDM Transmitter
compileIt = input('Compile[false=0/true=1]?');
useCodegen = true;

% System parameters to adjust because of hardware limitation
desiredSamplingFrequency =  1e6;
USRPADCSamplingRate = 100e6;
InterpolationFactor = USRPADCSamplingRate/desiredSamplingFrequency;

% Signal parameters
framesToTxOnStep = 20; % May have to tune for underflow issues
enableMA = true;% not important for transmitter

% Create signal vector to be transmitted every step call
[ txOrg, tx ] = generateOFDMSignal( framesToTxOnStep, enableMA );
tx.samplingFreq = desiredSamplingFrequency;% Set desired frequeny
tx.FreqBin = tx.samplingFreq/tx.FFTLength;% Set frequency bin width

% Setup transmitter
if compileIt
    disp('Generating code for transmitter');
    codegen sdruOFDMTransmitterRun -args { InterpolationFactor, txOrg }
end

% Run transmitter
if useCodegen
    sdruOFDMTransmitterRun_mex(InterpolationFactor, txOrg);
else
    sdruOFDMTransmitterRun(InterpolationFactor, txOrg);
end
