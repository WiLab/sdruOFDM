% Communications System Toolbox Support Package for USRP(R) Radio
% 
%
% Introduction
%   <a href="matlab:web([strrep(usrphelp, 'index.html', 'gs'), filesep,'btpn6dm.html'])">Setting Up USRP</a>         - Configure host computer for USRP(R) Radio
%   <a href="matlab:web([strrep(usrphelp, 'index.html', 'ug'), filesep,'btqw9it.html'])">Using USRP</a>              - Use blocks and System objects to communicate with USRP(R) Radio
%   <a href="matlab:web([strrep(usrphelp, 'index.html', 'ug'), filesep,'btopab6.html'])">Improving Performance</a>   - Tips to maximize performance
%   <a href="matlab:web([strrep(usrphelp, 'index.html', 'ug'), filesep,'btbzcgw-1.html'])">Targeting USRP</a>          - Generate code for FPGA in USRP(R) N210 hardware
%   <a href="matlab:web(usrphelp)">Help and Examples</a>       - Links to documentation and examples
% Functions
%   compilesdru             - Compile a function for stand-alone use with USRP(R) Radio
%   findsdru                - Find USRP(R) radios connected to host computer and report status
%   getSDRuDriverVersion    - UHD(R) driver version on the host computer
%   probesdru               - Detailed USRP(R) radio information
%   setsdruip               - Set USRP(R) radio IP address
%   setupsdru               - Initialize environment to use USRP(R) Radio software
%   setuptargetsdru         - Download the FPGA interface code for targeting FPGA in USRP(R) Radio
% System Objects
%   comm.SDRuTransmitter    - Send data to the USRP(R) Radio
%   comm.SDRuReceiver       - Receive data from the USRP(R) Radio
% Blocks
%   sdrulib                 - Open the block library for USRP(R) Radio
%
% USRP and UHD are trademarks of National Instruments Corp.

% Copyright 2011-2012 The MathWorks, Inc.
