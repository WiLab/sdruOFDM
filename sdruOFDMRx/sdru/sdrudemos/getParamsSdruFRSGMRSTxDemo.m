function frsTxParams = getParamsSdruFRSGMRSTxDemo(channel, CTCSSCode, ...
    CTCSSAmplitude, toneFrequency, tsTime)
%getParamsSdruFRSGMRSTxDemo Get SDRu FRS/GMRS transmitter example
%parameters

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.1 $  $Date: 2012/08/21 01:21:01 $

switch nargin
  case 0
    channel = 12;
    CTCSSCode = 5;
    CTCSSAmplitude = 0.15;
    toneFrequency = 880;
    tsTime = 1;
  case 1
    CTCSSCode = 5;
    CTCSSAmplitude = 0.15;
    toneFrequency = 880;
    tsTime = 1;
  case 2
    CTCSSAmplitude = 0.15;
    toneFrequency = 880;
    tsTime = 1;
  case 3
    toneFrequency = 880;
    tsTime = 1;
  case 4
    tsTime = 1;
end  

USRP_SAMPLE_RATE                    = 100e6;
frsTxParams.USRPInterpolationFactor = 500;
frsTxParams.USRPGain                = 15;

frsTxParams.ToneFrequencies         = ...
  [67.0 71.9 74.4 77.0 79.7 82.5 85.4 88.5  91.5 94.8 97.4  ...
   100.0 103.5 107.2 110.9 114.8 118.8 123.0 127.3 131.8 136.5 141.3 ...
   146.2 151.4 156.7 162.2 167.9 173.8 179.9 186.2 192.8 ...
   203.5 210.7 218.1 225.7 233.6 241.8 250.3]';

frsTxParams.InterpolationFactor     = 25;

frsTxParams.FrontEndSampleRate = ...
    USRP_SAMPLE_RATE/frsTxParams.USRPInterpolationFactor;
frsTxParams.SampleRate         = frsTxParams.FrontEndSampleRate...
  / frsTxParams.InterpolationFactor;

frsTxParams.USRPFrameLength    = 4000;
frsTxParams.SourceFrameLength  = frsTxParams.USRPFrameLength ...
  / frsTxParams.InterpolationFactor;

hMFilt                = mfilt.firinterp(frsTxParams.InterpolationFactor);
frsTxParams.Numerator = hMFilt.Numerator;

frsTxParams.FrequencySensitivityGain  = 2500 * 2 * pi * ...
  (1/frsTxParams.FrontEndSampleRate);

frsTxParams.Channel                   = channel;
frsTxParams.CTCSSCode                 = CTCSSCode;
frsTxParams.CTCSSAmplitude            = CTCSSAmplitude;

frsTxParams.ToneFrequency             = toneFrequency;

frsTxParams.ChirpSweeptime            = tsTime;
frsTxParams.ChirpInitialFreq          = 600;
frsTxParams.ChirpTargetFreq           = 1200;

frsTxParams.AudioInterpolationFactor  = 160;
frsTxParams.AudioDecimationFactor     = 441;
frsTxParams.AudioFrameLength          = frsTxParams.SourceFrameLength * ...
  frsTxParams.AudioDecimationFactor / frsTxParams.AudioInterpolationFactor;
