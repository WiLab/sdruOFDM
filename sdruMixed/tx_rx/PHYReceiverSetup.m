function [ ObjPreambleDemod, ObjDataDemod, ObjAGC, ObjCRC, ObjSDRuReceiver, rx, estimate ] = PHYReceiverSetup

%% Configure Receiver Parameters
[ ObjPreambleDemod, ObjDataDemod, ~, rx_tmp ] = generateOFDMSignal;
receiveBufferLength = 1280*4; %Size of Buffer of sliding window, factor of frame size (1280), must be constant
USRPDACSamplingRate = 100e6;
DecimationFactor = USRPDACSamplingRate/rx_tmp.samplingFreq;
offsetCompensationValue = -7000;
% Timeout info
buffersPerSecond = (USRPDACSamplingRate/DecimationFactor)/receiveBufferLength;
timeoutDuration = buffersPerSecond*20;

%Create memory structure to collect measurements for sync algorithms
numFreqToAverage = 15; %Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness)
[estimate, ~] = initializeOFDMSyncMemory_sdr( receiveBufferLength, numFreqToAverage, rx_tmp, false, ObjPreambleDemod, ObjDataDemod );

% Gain control
ObjAGC = comm.AGC('UpdatePeriod', receiveBufferLength);

% USRP
ObjSDRuReceiver = comm.SDRuReceiver( '192.168.10.2', ...
    'CenterFrequency',      2.2e9 + offsetCompensationValue, ...
    'DecimationFactor',     DecimationFactor,...
    'FrameLength',          receiveBufferLength,...
    'OutputDataType',       'double',...
    'Gain',                 18);

% CRC
ObjCRC = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);


% Save items to output structure
rx = rx_tmp;
rx.receiveBufferLength = receiveBufferLength;
rx.timeoutDuration = timeoutDuration;



end

