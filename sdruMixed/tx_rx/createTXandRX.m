function [TX,RX] = createTXandRX
%#Codegen

%coder.extrinsic('generateOFDMSignal','generateOFDMSignal_TX');

% System parameters to adjust because of hardware limitation
desiredSamplingFrequency =  5e6;
USRPDACSamplingRate = 100e6;
offsetCompensationValue = -73242.187500; %Generated from sdruFrequencyCalibration demos


%% Create PHY Receive Chain
% Parameters
[ hPreambleDemod,hDataDemod,~, RX ] = generateOFDMSignal;
RX.DecimationFactor = USRPDACSamplingRate/RX.samplingFreq;
RX.receiveBufferLength = ceil( RX.frameLength*4 ); %Size of Buffer of sliding window
receiveBufferLength = 5120;

% Create TX structure for receiver construction and data vector of desired size
RX.samplingFreq = desiredSamplingFrequency;% Set desired frequeny
RX.freqBin = RX.samplingFreq/RX.FFTLength;% Set frequency bin width

% Setup USRP Object
ObjSDRuReceiver = comm.SDRuReceiver( '192.168.10.2', ...
    'CenterFrequency',      2.2e9 + offsetCompensationValue, ...
    'DecimationFactor',     RX.DecimationFactor,...
    'FrameLength',          receiveBufferLength,...
    'OutputDataType',       'double',...
    'Gain',                 18);

%Create memory structure to collect measurements for sync algorithms
numFreqToAverage = 15; %Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness)
%[estimate, frameBER] = initializeOFDMSyncMemory_sdr( RX.receiveBufferLength, numFreqToAverage, RX, false ); 

% Gain control
ObjAGC = comm.AGC('UpdatePeriod', receiveBufferLength);


% %% Create PHY Transmit Chain
message = 'Hello world';
framesToTXOnStep = 10;
InterpolationFactor = USRPDACSamplingRate/desiredSamplingFrequency;
[ ~,~,~, TX ] = generateOFDMSignal_TX2( message );
% TX.samplingFreq = desiredSamplingFrequency;% Set desired frequeny
% TX.FreqBin = TX.samplingFreq/TX.FFTLength;% Set frequency bin width
% % Setup USRP TX Object
% TX.ObjSDRuTransmitter = comm.SDRuTransmitter('192.168.10.2', ...
%     'CenterFrequency',      2.2e9, ...
%     'InterpolationFactor',  InterpolationFactor,...
%     'Gain',                 25);



end



