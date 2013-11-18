function stereoFM = configureSdruFMStereoDemo
%configureSdruFMStereoDemo Configure the SDRu Stereo FM demodulator
%MATLAB(R) example sdruFMStereoReceiver.

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.1 $  $Date: 2012/08/21 01:20:52 $

% Simulation Parameters
stereoFM                = getParamsSdruFMStereoDemo; % Receiver parameters
stereoFM.StopTime       = 10;                        % Seconds
stereoFM.AudioFrameTime = (stereoFM.FrameLength ...
  * (stereoFM.RCAudioInterpFactor / stereoFM.RCAudioDecimFactor) ...
  * (stereoFM.RCDemodInterpFactor / stereoFM.RCDemodDecimFactor) ...
  / stereoFM.AudioSampleRate);                        % Seconds

