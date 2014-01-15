function [ ObjPreambleDemod, ObjDataDemod, ObjAGC, ObjCRC, ObjSDRuReceiver, rx, estimate ] = PHYReceiverSetup

%% Configure Receiver Parameters
[ ObjPreambleDemod, ObjDataDemod, ~, rx ] = generateOFDMSignal;
rx.receiveBufferLength = ceil( rx.frameLength*4 ); %Size of Buffer of sliding window
rx.USRPDACSamplingRate = 100e6;
rx.DecimationFactor = USRPDACSamplingRate/rx.samplingFreq;
rx.offsetCompensationValue = -7000;
% Timeout info
buffersPerSecond = (rx.USRPDACSamplingRate/rx.DecimationFactor)/rx.receiveBufferLength;
rx.timeoutDuration = buffersPerSecond*20;

%Create memory structure to collect measurements for sync algorithms
numFreqToAverage = 15; %Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness)
[estimate, ~] = initializeOFDMSyncMemory_sdr( rx.receiveBufferLength, numFreqToAverage, rx, false, ObjPreambleDemod, ObjDataDemod );

% Gain control
ObjAGC = comm.AGC('UpdatePeriod', pReceiveBufferLength);

% USRP
ObjSDRuReceiver = comm.SDRuReceiver( '192.168.10.2', ...
    'CenterFrequency',      2.2e9 + rx.offsetCompensationValue, ...
    'DecimationFactor',     rx.DecimationFactor,...
    'FrameLength',          rx.receiveBufferLength,...
    'OutputDataType',       'double',...
    'Gain',                 18);

% CRC
ObjCRC = comm.CRCDetector([1 0 0 1], 'ChecksumsPerFrame',1);


end

