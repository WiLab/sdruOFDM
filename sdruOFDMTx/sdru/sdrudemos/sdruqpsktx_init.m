function SimParams = sdruqpsktx_init
% Set simulation parameters
% SimParams = sdruqpsktx_init

%   Copyright 2011-2012 The MathWorks, Inc.

% General simulation parameters
SimParams.Upsampling = 4; % Upsampling factor
SimParams.Fs = 2e5; % Sample rate
SimParams.Ts = 1/SimParams.Fs; % Sample time
SimParams.FrameSize = 100; % Number of modulated symbols per frame

% Tx parameters
SimParams.BarkerLength = 13; % Number of Barker code symbols
SimParams.DataLength = (SimParams.FrameSize - SimParams.BarkerLength)*2; % Number of data payload bits per frame
SimParams.MsgLength = 105; % Number of message bits per frame, 7 ASCII characters

SimParams.RxBufferedFrames = 10; % Received buffer length (in frames)
SimParams.RCGroupDelay = 5; % Group delay of Raised Cosine Tx Rx filters (in symbols)