function params = getParamsSdruFRSGMRSRxDemo(channel, CTCSSCode, ...
    detectionThresh)
%getParamsSdruFRSGMRSRxDemo Get SDRu FRS/GMRS receiver example parameters

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.1 $  $Date: 2012/08/21 01:21:00 $

switch nargin
  case 0
    channel = 12;
    CTCSSCode = 5;
    detectionThresh = 0.1;
end

USRP_SAMPLE_RATE            = 100e6;  % Hz
params.USRPDecimationFactor = 500;    % Hz
params.USRPGain             = 5;      % dB

params.FrontEndSampleRate   = USRP_SAMPLE_RATE/params.USRPDecimationFactor;
params.USRPFrameLength      = 4000;   % Samples

% CTCSS Frequencies
params.ToneFrequencies           = ...
  [67.0 71.9 74.4 77.0 79.7 82.5 85.4 88.5  91.5 94.8 97.4  ...
   100.0 103.5 107.2 110.9 114.8 118.8 123.0 127.3 131.8 136.5 141.3 ...
               146.2 151.4 156.7 162.2 167.9 173.8 179.9 186.2 192.8 ...
   203.5 210.7 218.1 225.7 233.6 241.8 250.3]';

% Decimation filter to convert 200 kHz to 8 kHz
params.DecimationFactor  = 25;
params.SampleRate        = params.FrontEndSampleRate ...
                            / params.DecimationFactor;
hMFilt                   = mfilt.firdecim(params.DecimationFactor);
params.Numerator         = params.DecimationFactor*hMFilt.Numerator;

% 10 kHz lowpass filter for channel selectivity
fd = fdesign.lowpass;
fd.Specification = 'N,Fp,Ap,Ast';
fd.FilterOrder   = 32;
fd.Fpass         = 10e3 * 2/params.FrontEndSampleRate; % normalized cutoff
fd.Apass         = 1;                                  % dB passband ripple
fd.Astop         = 60;                                 % dB stopband attenuation
frs_channelFilt  = design(fd,'equiripple');
assignin('base', 'frs_channelFilt', frs_channelFilt);
params.ChannelFilterNumerator = frs_channelFilt.Numerator;

% Highpass filter for removing CTCSS tone
fd = fdesign.highpass;
normalizefreq(fd, false, params.SampleRate);
fd.Fpass               = 350; % Passband frequency in Hz
fd.Fstop               = 260; % Stopband frequency in HZ
fd.Apass               = 1;   % dB passband ripple
fd.Astop               = 40;  % dB stopband attenuation
frs_channelFilt        = design(fd,'equiripple');
params.AudioFilterNumerator = frs_channelFilt.Numerator;

params.GoertzelCoefficients   = ...
    2 * cos (2 * pi * params.ToneFrequencies / params.SampleRate);

params.AudioFrameLength = params.USRPFrameLength / params.DecimationFactor;
  
params.Channel                = channel;
params.CTCSSCode              = CTCSSCode;
params.DetectionThreshold     = detectionThresh;
params.CTCSSDecodeBlockLength = 4000;

% [EOF]


