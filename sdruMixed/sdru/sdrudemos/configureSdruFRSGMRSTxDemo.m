function params = configureSdruFRSGMRSTxDemo(channel, CTCSSCode)
%configureSdruFRSGMRSTxDemo Configure the SDRu FRS/GMRS transmitter
%MATLAB(R) example sdruFRSGMRSTransmitter.

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.1 $  $Date: 2012/08/21 01:20:54 $

% Simulation Parameters
params                 = getParamsSdruFRSGMRSTxDemo(channel, CTCSSCode);
params.StopTime        = 10;                        % Seconds
params.SourceFrameTime = (params.SourceFrameLength / params.SampleRate); 
                                                    % Seconds
