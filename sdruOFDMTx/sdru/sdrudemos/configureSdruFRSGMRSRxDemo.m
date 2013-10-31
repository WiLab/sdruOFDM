function params = configureSdruFRSGMRSRxDemo(channel, CTCSSCode, ...
  detectionThreshold)
%configureSdruFRSGMRSRxDemo Configure the SDRu FRS/GMRS receiver MATLAB(R)
%example sdruFRSGMRSReceiver.

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.1 $  $Date: 2012/08/21 01:20:53 $

% Simulation Parameters
params                 = getParamsSdruFRSGMRSRxDemo(channel, CTCSSCode, ...
  detectionThreshold);
params.StopTime        = 10;                                % Seconds
params.USRPFrameTime   = (params.USRPFrameLength ...
                              / params.FrontEndSampleRate); % Seconds
