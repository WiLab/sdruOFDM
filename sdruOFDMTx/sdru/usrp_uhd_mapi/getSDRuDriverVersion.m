function [flatAddrList, errStat, errStr] = getSDRuDriverVersion()
%getSDRuDriverVersion Report UHD(R) version number for the host
%   A = getSDRuDriverVersion() returns the UHD(R) version number of the
%   MATLAB and Simulink Support Package for USRP(R) Hardware.
%   
%   % Example: 
%   % Get the UHD(R) version number of the MATLAB and Simulink Support 
%   % Package for USRP(R) Hardware.
%   getSDRuDriverVersion()
%
%   USRP and UHD are trademarks of National Instruments Corp.

%   Copyright 2011-2012 The MathWorks, Inc.

%#codegen

[flatAddrList, errStat, errStr] = mapiPrivate('getSDRuDriverVersion');
    
end
