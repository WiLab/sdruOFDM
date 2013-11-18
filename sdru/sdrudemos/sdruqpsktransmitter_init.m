function SimParams = sdruqpsktransmitter_init
% Set simulation parameters
% SimParams = sdruqpsktransmitter_init

%   Copyright 2012 The MathWorks, Inc.

% General simulation parameters
SimParams.Upsampling = 4; % Upsampling factor
SimParams.Fs = 2e5; % Sample rate
SimParams.Ts = 1/SimParams.Fs; % Sample time
SimParams.FrameSize = 100; % Number of modulated symbols per frame

% Tx parameters
SimParams.BarkerLength = 13; % Number of Barker code symbols
SimParams.DataLength = (SimParams.FrameSize - SimParams.BarkerLength)*2; % Number of data payload bits per frame
SimParams.MessageLength = 105; % Number of message bits per frame, 7 ASCII characters
SimParams.FrameCount = 100;

SimParams.RxBufferedFrames = 10; % Received buffer length (in frames)
SimParams.RaisedCosineGroupDelay = 5; % Group delay of Raised Cosine Tx Rx filters (in symbols)
SimParams.ScramblerBase = 2;
SimParams.ScramblerPolynomial = [1 1 1 0 1];
SimParams.ScramblerInitialConditions = [0 0 0 0];

% Generate square root raised cosine filter coefficients (required only for MATLAB example)
SimParams.SquareRootRaisedCosineFilterOrder = 2*SimParams.Upsampling*SimParams.RaisedCosineGroupDelay;
SimParams.RollOff = 0.5;

% Square root raised cosine transmit filter
hTxFilt = fdesign.interpolator(SimParams.Upsampling, ...
                'Square Root Raised Cosine', SimParams.Upsampling, ...
                'N,Beta', SimParams.SquareRootRaisedCosineFilterOrder, SimParams.RollOff);
hDTxFilt = design(hTxFilt);
SimParams.TransmitterFilterCoefficients = hDTxFilt.Numerator/2; 

%SDRu transmitter parameters
SimParams.USRPCenterFrequency = 2.4e9;
SimParams.USRPGain = 30;
SimParams.USRPInterpolation = 1e8/SimParams.Fs;
SimParams.USRPFrameLength = SimParams.Upsampling*SimParams.FrameSize*SimParams.RxBufferedFrames;

%Simulation Parameters
SimParams.FrameTime = SimParams.USRPFrameLength/SimParams.Fs;
SimParams.StopTime = 1000;
