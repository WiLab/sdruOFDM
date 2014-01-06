function [TX,RX] = createTXandRX
%#Codegen

%coder.extrinsic('generateOFDMSignal','generateOFDMSignal_Tx');

% System parameters to adjust because of hardware limitation
desiredSamplingFrequency =  5e6;
USRPDACSamplingRate = 100e6;
offsetCompensationValue = -73242.187500; %Generated from sdruFrequencyCalibration demos


%% Create PHY Receive Chain
% Parameters
enableMA = true;
[ ~, RX ] = generateOFDMSignal( 1e3, enableMA );
RX.DecimationFactor = USRPDACSamplingRate/RX.samplingFreq;
RX.receiveBufferLength = ceil( RX.frameLength*4 ); %Size of Buffer of sliding window

% Create tx structure for receiver construction and data vector of desired size
RX.samplingFreq = desiredSamplingFrequency;% Set desired frequeny
RX.FreqBin = RX.samplingFreq/RX.FFTLength;% Set frequency bin width

% Setup USRP Object
RX.ObjSDRuReceiver = comm.SDRuReceiver( '192.168.10.2', ...
    'CenterFrequency',      2.2e9 + offsetCompensationValue, ...
    'DecimationFactor',     RX.DecimationFactor,...
    'FrameLength',          RX.receiveBufferLength,...
    'OutputDataType',       'double',...
    'Gain',                 18);

%Create memory structure to collect measurements for sync algorithms
numFreqToAverage = 15; %Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness)
[RX.estimate, RX.frameBER] = initializeOFDMSyncMemory_sdr( receiveBufferLength, numFreqToAverage, tx, printReceivedData ); 

% Gain control
RX.ObjAGC = comm.AGC('UpdatePeriod', receiveBufferLength);

% Create demodulators objects
[ RX.hPreambleDemod, RX.hDataDemod ] = createOFDMDemods( tx );


%% Create PHY Transmit Chain
InterpolationFactor = USRPDACSamplingRate/desiredSamplingFrequency;
[ ~, TX ] = generateOFDMSignal_Tx( framesToTxOnStep, enableMA, message );
TX.samplingFreq = desiredSamplingFrequency;% Set desired frequeny
TX.FreqBin = TX.samplingFreq/TX.FFTLength;% Set frequency bin width
% Setup USRP TX Object
TX.ObjSDRuTransmitter = comm.SDRuTransmitter('192.168.10.2', ...
    'CenterFrequency',      2.2e9, ...
    'InterpolationFactor',  InterpolationFactor,...
    'Gain',                 25);







