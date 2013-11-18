function prmFreqCalibTx = configureFreqCalibTx( rfTxFreq, bbTxFreq )
% Configure parameters for SDRu Frequency Calibration Transmitter example.

%   Copyright 2013 The MathWorks, Inc.

%% SDRu Transmitter System object
prmFreqCalibTx.ADCSampleRate           = 100e6;    % sps
prmFreqCalibTx.USRPInterpolationFactor = 500;      
prmFreqCalibTx.Fs                      = prmFreqCalibTx.ADCSampleRate./...
                                         prmFreqCalibTx.USRPInterpolationFactor; 
                                                   % 200e3 sps
prmFreqCalibTx.USRPFrameLength         = 4000;     % samples
prmFreqCalibTx.USRPTxCenterFrequency   = rfTxFreq; % Hz
prmFreqCalibTx.USRPGain                = 23;       % dB
prmFreqCalibTx.TotalFrames             = 2000;     % frames

%% Sine wave
prmFreqCalibTx.SineAmplitude               = 0.1;
prmFreqCalibTx.SineFrequency               = bbTxFreq;          % 100Hz
prmFreqCalibTx.SineComplexOutput           = true;
prmFreqCalibTx.SineOutputDataType          = 'double';
prmFreqCalibTx.SineFrameLength             = 4000;

%% spectrum analyzer                         
prmFreqCalibTx.SpeAnaFFTLength = 8192;
