function [flatAddrList, errStat, errStr] = getSDRuList(varargin)
%getSDRuList Report all USRP (R) devices connected to the host computer
%   A = getSDRuList() returns a comma delimited list of IP addresses, A,
%   that belong to USRP(R) devices connected to the host computer.
%   
%   % Example: 
%   %   Create a cell array list of USRP(R) IP addresses
%
%   % Discover all USRP(R) devices
%   rawDeviceList = getSDRuList();
%   % Remove zeros from the end and use ',' as a token
%   deviceList = [',' rawDeviceList(rawDeviceList~=0)];
%   tokIdx = [strfind(deviceList, ',') length(deviceList)+1];
%   usrpIP = cell(length(tokIdx) - 1, 1);
%   for p=1:length(tokIdx)-1
%     usrpIP{p} = deviceList(tokIdx(p)+1:tokIdx(p+1)-1);
%   end
%   usrpIP
%
%   USRP is a trademark of National Instruments Corp.

%   Copyright 2012 The MathWorks, Inc.

%#codegen

if nargin == 0
  ipAddress = uint8(0);
else
  aAddrs = varargin{1};
  ipAddress = uint8(aAddrs);
end

[flatAddrList, errStat, errStr] = mapiPrivate('getSDRuList', ipAddress);
