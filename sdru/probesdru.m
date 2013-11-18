function [info, status] = probesdru(varargin)
%PROBESDRU Detailed USRP(R) radio information
%   I = PROBESDRU returns detailed information on the USRP(R) radio connected to
%   the host computer in I as a string. If there is more than one USRP(R) radio
%   connected to the host computer, PROBESDRU returns information on the first
%   discovered radio. PROBESDRU calls the UHD(TM) application called
%   "uhd_usrp_probe" provided by Ettus Research(TM), LLC, as a system command
%   and returns its output.
%
%   I = PROBESDRU(IPADDRESS) returns detailed information on the USRP(R) radio
%   with IP address IPADDRESS, which is a dotted quad string.
%
%   [I,S] = PROBESDRU returns the status of the system command execution in S. A
%   non-zeros S value indicates an error.
%
%   % Example 1:
%   %   Get detailed information on a USRP(R) radio connected to your host
%   %   computer.
%   probesdru
%
%   % Example 2: 
%   %   Get detailed information on the USRP(R) radio with an IP
%   %   address of 192.168.10.2.
%   probesdru('192.168.10.2')
%
%   See also findsdru, setsdruip.
%
%   USRP, UHD, and Ettus Research are trademarks of National Instruments Corp.

%   Copyright 2012 The MathWorks, Inc.

narginchk(0,1);

% Parse arguments
numInArgs = nargin;

switch numInArgs
  case 0
    appArgs = '';
  case 1
    ipAddrs = varargin{1};
    checkIPAddressFormat(ipAddrs, 'IPADDRESS');
    appArgs = sprintf('--args="addr=%s"', ipAddrs);
end

[info, status] = call_uhd_app('uhd_usrp_probe', appArgs);

end
