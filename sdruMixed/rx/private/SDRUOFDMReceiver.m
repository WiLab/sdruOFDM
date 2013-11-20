%% USRP OFDM Receiver
compileIt = input('Compile[false=0/true=1]?');
useCodegen = compileIt;

% System parameters to adjust because of hardware limitation
desiredSamplingFrequency =  5e6;
USRPDACSamplingRate = 100e6;
InterpolationFactor = USRPDACSamplingRate/desiredSamplingFrequency;

% Parameters
enableMA = true;
numFrames = 1; % Number of frames to find
offsetCompensationValue = -73242.187500; %Generated from sdruFrequencyCalibration demos
% Visuals
printReceivedData = true;
useScopes = false;

% Create tx structure for receiver construction and data vector of desired size
[ rTmp, tx ] = generateOFDMSignal( 1e3, enableMA );
tx.samplingFreq = desiredSamplingFrequency;% Set desired frequeny
tx.FreqBin = tx.samplingFreq/tx.FFTLength;% Set frequency bin width

% Compile receiver with MATLAB Coder
if compileIt
    disp('Compiling receiver...');
    result = compilesdru('receiveOFDM80211a_sdru','mex','-args', { coder.Constant(tx), offsetCompensationValue, numFrames, coder.Constant(useScopes) , coder.Constant(printReceivedData) });
    %Error occured
    if isempty(result.summary.buildResults)
        disp('Receiver unable to compile correctly:(');
        return;
    end
end


for i = 1 : 1
% Run receiver
disp('Starting receiver!');
tic;
if useCodegen
    receiveOFDM80211a_sdru_mex( tx, offsetCompensationValue, numFrames, useScopes, printReceivedData );
else
    receiveOFDM80211a_sdru( tx, offsetCompensationValue, numFrames, useScopes, printReceivedData );
end    
toc;
end
