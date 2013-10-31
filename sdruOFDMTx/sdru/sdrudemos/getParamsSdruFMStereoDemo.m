function stereoFM = getParamsSdruFMStereoDemo
%getParamsSdruFMStereoDemo Get SDRu Stereo FM receiver example parameters

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.1 $  $Date: 2012/08/21 01:20:59 $

DATA_SAMPLE_RATE              = 152000;  % Hz
stereoFM.AudioSampleRate      = 48000;   % Hz
stereoFM.USRPDecimationFactor = 500;
stereoFM.FrameLength          = 4000;    % Samples
stereoFM.USRPGain             = 30;      % dB

%%%%%% Filter for pre-demodulation rate conversion to 152 kHz %%%%%%
stereoFM.RCDemodInterpFactor = 19;
stereoFM.RCDemodDecimFactor = 25;
h = mfilt.firsrc(stereoFM.RCDemodInterpFactor,...
    stereoFM.RCDemodDecimFactor);
stereoFM.RCDemodNumerator = h.Numerator; 

%%%%%% Peaking filter to isolate 19 kHz tone %%%%%%
stereoFM.FsData = DATA_SAMPLE_RATE;  % Sampling Frequency
N  = 4;       % Order
F0 = 19000;   % Center frequency
Q  = 100;     % Q-factor

h = fdesign.peak('N,F0,Q',N,F0,Q,stereoFM.FsData);
Hd = design(h,'butter','SOSScaleNorm','linf');
set(Hd,'Arithmetic','single');
stereoFM.peak19fil = Hd;

%%%% Filter for sample rate conversion to 48 kHz.  Reject the 19 kHz pilot tone
%%%% and all signal energy above it.  %%%%
stereoFM.RCAudioInterpFactor = 6;
stereoFM.RCAudioDecimFactor = 19;
stereoFM.LP15k = fir1(500, ...
  18500/(stereoFM.FsData * stereoFM.RCAudioInterpFactor/2));

%%%%% Deemphasis filter %%%%%
% Design a 75 microseconds deemphasis filter 
N  = 5;              % Order
B  = 1;              % Number of bands

% Frequency Vector
F1 = [50 100 500 1000 2000 3000 4000 5000 6000 7000 8000 9000 10000 ...
      11000 12000 13000 14000 15000 16000 17000 18000 19000 20000];

% First Amplitude Vector
A1 = [1 0.998849369936505 0.973867785328633 0.904690437738119 ...
      0.727779804536824 0.577430872713986 0.468813382145265 ...
      0.390840895792402 0.333426412763235 0.290068119869315 ...
      0.256448403651772 0.229614864811236 0.207491351745491 ...
      0.189452351435659 0.174180687339161 0.161064563517827 ...
      0.149795925304488 0.140119958494001 0.131522483219224 ...
      0.123879658653037 0.117084660232024 0.111045253533364 ...
      0.105560150321593];

h = fdesign.arbmag('N,B,F,A', N, B, F1, A1, stereoFM.AudioSampleRate);
stereoFM.Deemp = design(h, 'iirlpnorm');

h = fdesign.arbmag('N,B,F,A', N, B, F1, 1./A1, stereoFM.AudioSampleRate);
preemp = design(h, 'iirlpnorm');  %#ok                                          

% [EOF]
