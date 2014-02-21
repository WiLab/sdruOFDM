function [ObjAGC,ObjSDRuReceiver, ObjSDRuTransmitter, ObjDetect, ObjPreambleDemod, ObjDataDemod,...
          estimate, tx, timeoutDuration, messageBits, desiredSamplingFrequency] = CreateTXRX_2

% System parameters to adjust because of hardware limitation
numFrames = 1; % Frames to capture
desiredSamplingFrequency =  5e6;
USRPADCSamplingRate = 100e6;
InterpolationFactor = USRPADCSamplingRate/desiredSamplingFrequency;
CenterFrequency = 2.24e9;

[ ~, ~, ~, tx ] = generateOFDMSignal_TX2( 'UnimportantMessage', desiredSamplingFrequency);
tx.samplingFreq = desiredSamplingFrequency;% Set desired frequeny
tx.freqBin = tx.samplingFreq/tx.FFTLength;% Set frequency bin width


% Setup transmitter
ObjSDRuTransmitter = comm.SDRuTransmitter('192.168.10.2', ...
    'CenterFrequency',      CenterFrequency, ...
    'InterpolationFactor',  InterpolationFactor,...
    'Gain',                 25);


% Setup Parameters
[ ObjPreambleDemod, ObjDataDemod, ~, rx ] = generateOFDMSignal(desiredSamplingFrequency);%_TX2('HelloShannon');

rx.receiveBufferLength = 5120;%ceil( rx.frameLength*4 ); %Size of Buffer of sliding window
receiveBufferLength = 5120;

rx.DecimationFactor = USRPADCSamplingRate/rx.samplingFreq;

%offsetCompensationValue = 0;
%offsetCompensationValue = -77148;% Get from calibration
offsetCompensationValue = 71289;% Get from calibration

% Sync Algorithms
numFreqToAverage = 15; %Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness)

%Create memory structure to collect measurements for sync algorithms
[estimate, ~] = initializeOFDMSyncMemory_sdr( rx.receiveBufferLength, numFreqToAverage, rx, false, ObjPreambleDemod, ObjDataDemod );

% Gain control
ObjAGC = comm.AGC('UpdatePeriod', receiveBufferLength); % Value must be constant, equal to rx.receiveBufferLength

% USRP
ObjSDRuReceiver = comm.SDRuReceiver( '192.168.10.2', ...
    'CenterFrequency',      CenterFrequency + offsetCompensationValue, ...
    'DecimationFactor',     rx.DecimationFactor,...
    'FrameLength',          receiveBufferLength,...
    'OutputDataType',       'double',...
    'Gain',                 18);

% CRC
ObjDetect = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);

% Timeout info
buffersPerSecond = (100e6/rx.DecimationFactor)/rx.receiveBufferLength;
timeoutDuration = floor(buffersPerSecond*0.05);

% Soft decisions
messageBits = zeros(numFrames,rx.messageCharacters*7+3);%3 for CRC


end
