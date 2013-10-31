function SimParams = sdruqpskreceiver_init
% Set simulation parameters
% SimParams = sdruqpsktransmitter_init

%   Copyright 2012 The MathWorks, Inc.

% General simulation parameters
SimParams.M = 4; % M-PSK alphabet size
SimParams.Upsampling = 4; % Upsampling factor
SimParams.Downsampling = 2; % Downsampling factor
SimParams.Fs = 2e5; % Sample rate
SimParams.Ts = 1/SimParams.Fs; % Sample time
SimParams.FrameSize = 100; % Number of modulated symbols per frame

% Tx parameters
SimParams.BarkerLength = 13; % Number of Barker code symbols
SimParams.DataLength = (SimParams.FrameSize - SimParams.BarkerLength)*2; % Number of data payload bits per frame
SimParams.MessageLength = 105; % Number of message bits per frame, 7 ASCII characters
SimParams.FrameCount = 100;
SimParams.ScramblerBase = 2;
SimParams.ScramblerPolynomial = [1 1 1 0 1];
SimParams.ScramblerInitialConditions = [0 0 0 0];

SimParams.RxBufferedFrames = 10; % Received buffer length (in frames)
SimParams.RaisedCosineGroupDelay = 5; % Group delay of Raised Cosine Tx Rx filters (in symbols)

% Generate square root raised cosine filter coefficients (required only for MATLAB example)
SimParams.SquareRootRaisedCosineFilterOrder = 2*SimParams.Upsampling*SimParams.RaisedCosineGroupDelay;
SimParams.RollOff = 0.5;

% Square root raised cosine receive filter
hRxFilt = fdesign.decimator(SimParams.Upsampling/SimParams.Downsampling, ...
                'Square Root Raised Cosine', SimParams.Upsampling, ...
                'N,Beta', SimParams.SquareRootRaisedCosineFilterOrder, SimParams.RollOff);
hDRxFilt = design(hRxFilt);
SimParams.ReceiverFilterCoefficients = hDRxFilt.Numerator; 

% Rx parameters
K = 1;
A = 1/sqrt(2);
% Look into model for details for details of PLL parameter choice. Refer equation 7.30 of "Digital Communications - A Discrete-Time Approach" by Michael Rice. 
SimParams.PhaseErrorDetectorGain = 2*K*A^2+2*K*A^2; % K_p for Fine Frequency Compensation PLL, determined by 2KA^2 (for binary PAM), QPSK could be treated as two individual binary PAM
SimParams.PhaseRecoveryGain = 1; % K_0 for Fine Frequency Compensation PLL
SimParams.TimingErrorDetectorGain = 2.7*2*K*A^2+2.7*2*K*A^2; % K_p for Timing Recovery PLL, determined by 2KA^2*2.7 (for binary PAM), QPSK could be treated as two individual binary PAM, 2.7 is for raised cosine filter with roll-off factor 0.5
SimParams.TimingRecoveryGain = -1; % K_0 for Timing Recovery PLL, fixed due to modulo-1 counter structure
SimParams.CoarseFrequencyCompFFTSize = 2048; % FFT size for coarse frequency compensation
SimParams.PhaseRecoveryLoopBandwidth = 0.01; % Normalized loop bandwidth for fine frequency compensation
SimParams.PhaseRecoveryDampingFactor = 1; % Damping Factor for fine frequency compensation
SimParams.TimingRecoveryLoopBandwidth = 0.01; % Normalized loop bandwidth for timing recovery
SimParams.TimingRecoveryDampingFactor = 1; % Damping Factor for timing recovery

%SDRu receiver parameters
SimParams.USRPCenterFrequency = 2.4e9;
SimParams.USRPGain = 40;
SimParams.USRPDecimationFactor = 1e8/SimParams.Fs;
SimParams.USRPFrontEndSampleRate = 1/SimParams.Fs;
SimParams.USRPFrameLength = SimParams.Upsampling*SimParams.FrameSize*SimParams.RxBufferedFrames;

%Simulation parameters
SimParams.FrameTime = SimParams.USRPFrameLength/SimParams.Fs;
SimParams.StopTime = 5;



