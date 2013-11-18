
bbTxFreq = 100;    % Transmitted baseband frequency
rfTxFreq = 2.415e9; % Nominal RF transmit center frequency

%% Sine wave
prmFreqCalibTx.SineAmplitude            = 0.1;
prmFreqCalibTx.SineFrequency            = bbTxFreq;          % 100Hz
prmFreqCalibTx.SineComplexOutput        = true;
prmFreqCalibTx.SineFrameLength		    = 4000;
prmFreqCalibTx.SineType                 = 'double';

prmFreqCalibTx.ADCSampleRate           = 100e6;    % sps
prmFreqCalibTx.USRPInterpolationFactor = 20;      
prmFreqCalibTx.Fs                      = 100e6/prmFreqCalibTx.USRPInterpolationFactor;
prmFreqCalibTx.USRPFrameLength         = 4000;     % samples
prmFreqCalibTx.USRPTxCenterFrequency   = rfTxFreq; % Hz
prmFreqCalibTx.USRPGain                = 23;       % dB
prmFreqCalibTx.TotalFrames             = 200000;     % frames

hSineSource = dsp.SineWave (...
    'Frequency',           prmFreqCalibTx.SineFrequency , ...
    'Amplitude',           prmFreqCalibTx.SineAmplitude,...
    'ComplexOutput',       prmFreqCalibTx.SineComplexOutput, ...
    'SampleRate',          prmFreqCalibTx.Fs, ...
    'SamplesPerFrame',     prmFreqCalibTx.SineFrameLength, ...
    'OutputDataType',      prmFreqCalibTx.SineType);

% generate sine wave
sinewave =  step(hSineSource); 

compilesdru('FreqCalTx','mex','-args',{ coder.Constant(sinewave), coder.Constant(prmFreqCalibTx)} );

%Run
FreqCalTx_mex(sinewave, prmFreqCalibTx);

