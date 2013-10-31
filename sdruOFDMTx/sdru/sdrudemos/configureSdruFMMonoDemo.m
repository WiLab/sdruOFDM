function monoFM = configureSdruFMMonoDemo
%configureSdruFMMonoDemo Configure the SDRu Monophonic FM receiver
%MATLAB(R) example sdruFMMonoReceiver.

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.1 $  $Date: 2012/08/21 01:20:51 $

%#codegen

% Simulation Parameters
monoFM                 = getParamsSdruFMMonoDemo; % Demodulator parameters
monoFM.StopTime        = 10;                      % Seconds
monoFM.AudioFrameTime  = (monoFM.FrameLength * monoFM.InterpolationFactor ...
  / monoFM.DecimationFactor) / monoFM.AudioSampleRate; % Seconds

