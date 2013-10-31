function monoFM = getParamsSdruFMMonoDemo
%getParamsSdruFMMonoDemo Get SDRu Monophonic FM receiver example parameters

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.1 $  $Date: 2012/08/21 01:20:58 $

USRP_SAMPLE_RATE            = 100e6;  % Hz
monoFM.USRPDecimationFactor = 500;    % To achieve sample rate of 200 kHz

%%%%%%% Deemphasis Filter %%%%%%
% Design a 75 microseconds deemphasis filter 
N         = 5;                   % Order
B         = 1;                   % Number of bands
monoFM.Fs = USRP_SAMPLE_RATE ...
  / monoFM.USRPDecimationFactor; % Sampling Frequency

%  Frequency Vector
F1 = [50 100 500 1000 2000 3000 4000 5000 6000 7000 8000 9000 10000 ...
      11000 12000 13000 14000 15000 16000 17000 18000 19000 20000 ...
      97656.25];

%  Amplitude Vector
A1 = [1 0.998849369936505 0.973867785328633 0.904690437738119 ...
      0.727779804536824 0.577430872713986 0.468813382145265 ...
      0.390840895792402 0.333426412763235 0.290068119869315 ...
      0.256448403651772 0.229614864811236 0.207491351745491 ...
      0.189452351435659 0.174180687339161 0.161064563517827 ...
      0.149795925304488 0.140119958494001 0.131522483219224 ...
      0.123879658653037 0.117084660232024 0.111045253533364 ...
      0.105560150321593 0.0223872113856834];

h = fdesign.arbmag('N,B,F,A', N, B, F1, A1, monoFM.Fs);

monoFM.DeemphasisFilter = design(h, 'iirlpnorm');

%%%%%%% Low-pass filter for the x[6n/25] resampler %%%%%%

% To get to 48 kHz from 200 kHz
monoFM.InterpolationFactor = 6;
monoFM.DecimationFactor = 25;

% Design a lowpass filter to suppress the 19 kHz pilot tone and all signal
% energy above 19 kHz
monoFM.Lowpass15k =  fir1(200, ...
  18500/(monoFM.Fs*monoFM.InterpolationFactor/2));

monoFM.AudioSampleRate = (USRP_SAMPLE_RATE/monoFM.USRPDecimationFactor) ...
  * (monoFM.InterpolationFactor / monoFM.DecimationFactor);

monoFM.FrameLength          = 4000; % Integer multiple of decimation factor
monoFM.USRPGaindB           = 30;

% [EOF]
