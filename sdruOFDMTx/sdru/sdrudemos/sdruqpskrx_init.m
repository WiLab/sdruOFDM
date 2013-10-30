function SimParams = sdruqpskrx_init
% Set simulation parameters
% SimParams = sdruqpskrx_init

%   Copyright 2011-2012 The MathWorks, Inc.

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
SimParams.MsgLength = 105;

% Rx parameters
SimParams.RxBufferedFrames = 10; % Received buffer length (in frames)
SimParams.RCGroupDelay = 5; % Group delay of Raised Cosine Tx Rx filters (in symbols)
K = 1;
A = 1/sqrt(2);
% Look into model for details for details of PLL parameter choice.
SimParams.FineFreqPEDGain = 2*K*A^2+2*K*A^2; % K_p for Fine Frequency Compensation PLL, determined by 2KA^2 (for binary PAM), QPSK could be treated as two individual binary PAM
SimParams.FineFreqCompensateGain = 1; % K_0 for Fine Frequency Compensation PLL
SimParams.TimingRecTEDGain = 2.7*2*K*A^2+2.7*2*K*A^2; % K_p for Timing Recovery PLL, determined by 2KA^2*2.7 (for binary PAM), QPSK could be treated as two individual binary PAM, 2.7 is for raised cosine filter with roll-off factor 0.5
SimParams.TimingRecCompensateGain = -1; % K_0 for Timing Recovery PLL, fixed due to modulo-1 counter structure