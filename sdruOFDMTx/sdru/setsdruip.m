function [info, status] = setsdruip(currIP, newIP)
%SETSDRUIP Set USRP(R) radio IP address
%   I = SETSDRUIP(CURRIP, NEWIP) sets the IP address of the USRP(R) device at
%   the IP address CURRIP to a new IP address, NEWIP, where both CURRIP and
%   NEWIP are dotted quad strings. SETSDRUIP calls the UHD(TM) application
%   called "usrp_burn_mb_eeprom" provided by Ettus Research(TM), LLC, as a
%   system command and returns its output in I. You must power-cycle the radio
%   for the changes to take effect.
%
%   [I,S] = SETSDRUIP(CURRIP, NEWIP) returns the status of the system command
%   execution in S. A non-zeros S value indicates an error.
%
%   If you change the subnet of the radio, i.e. the third number in the IP
%   string, you must reconfigure your host computer's Ethernet port to use the
%   same subnet to be able to communicate with the radio.
%
%   % Example:
%   %   Set the IP address of the USRP(R) radio at IP address 192.168.30.22 to
%   %   192.168.30.20. This example assumes that you have USRP(R) radio at IP
%   %   address 192.168.30.22. 
%   setsdruip('192.168.30.22', '192.168.30.20')
%
%   See also findsdru, probesdru.
%
%   USRP, UHD, and Ettus Research are trademarks of National Instruments Corp.

%   Copyright 2012 The MathWorks, Inc.


narginchk(2,2);

checkIPAddressFormat(currIP, 'CURRIP');
checkIPAddressFormat(newIP, 'NEWIP');
appArgs = sprintf('--args addr="%s" --key ip-addr --val "%s"', currIP, newIP);


[info, status] = call_uhd_app('usrp_burn_mb_eeprom', appArgs);

end
