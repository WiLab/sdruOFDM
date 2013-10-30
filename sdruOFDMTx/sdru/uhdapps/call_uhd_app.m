function [r, s] = call_uhd_app(appName, appArgs)
% call_uhd_app Execute a binary application from a compiled UHD(TM) distribution
%
% NOTE: This function is experimental and is intended to be executed under the
%       guidance of MathWorks support.
%
% NOTE: This function is not on the MATLAB path; change your current directory to 
%       its location before execution.
%
% [result, status] = call_uhd_app(APPNAME, APPARGS)
% [result, status] = call_uhd_app(APPNAME, '--help')
% [result, status] = call_uhd_app('sudo APPNAME', APPARGS)
% appsList         = call_uhd_app('LIST_APPS')
%
% A number of the UHD(TM) applications are available to execute within the
% MATLAB environment.  This allows for basic diagnostic work such as device
% discovery and device probing without having to compile your own binaries
% from the UHD(TM) repository.  These applications are based on the same build 
% of UHD(TM) from Ettus Research(TM) used by the Support Package for
% USRP(R) Radio web download.
%
% For full information about any UHD(TM) application, see the documentation from
% Ettus Research.  In particular, reprogramming the FPGA and changing the
% device address should be done with caution.
%
% APPARGS is optional.  Most UHD(TM) apps recognize '--help'.
% Prepend 'sudo' to the APPNAME to run with elevated privileges on Linux.
% Use special string 'LIST_APPS' to see a list of found apps.  
%
% This function expects the following directory structure:
% ./<arch>  : OS-dependent binaries
% ../../EttusResearch-UHD-Mirror-ad12df0/host/utils 
%           : python scripts for loading FPGA and firmware binaries
% ./images  : location of FPGA and firmware binaries
%
%
% Commonly useful applications include:
%
% uhd_find_devices           : Discover devices connected to your host computer.
% uhd_usrp_probe             : Get a detailed listing of a connected device.
% usrp2_card_burner_gui.py   : Update the FPGA and firmware images on an SD card.
% usrp_n2xx_net_burner_gui.py: Update the FPGA and firmware images for an N200 or N210 device.
% usrp_burn_mb_eeprom        : Update the IP address of an attached USRP device.
% rx_timed_samples           : An example C++ application from UHD(TM).
% tx_timed_samples           : An example C++ application from UHD(TM).
%
% Examples:
%
% 1. Find devices attached to the current host:
% 
% call_uhd_app('uhd_find_devices')
%
% ans =
% linux; GNU C++ version 4.4.6; Boost_104400; UHD_003.002.003-vendor
%
% --------------------------------------------------
% -- UHD(TM) Device 0
% --------------------------------------------------
% Device Address:
%     type: usrp2
%     addr: 192.168.10.2
%     name: 
%     serial: 0000
%
% 2. Invoke the Python GUI app to program an SD card with compatible 
%    firmware and FPGA images from Ettus Research for a USRP2.  Images can
%    be found in the ./images folder.  
%
%    NOTE: Elevated privileges are needed to burn images.  On Linux, this is
%    typically done with 'sudo'.
%
%    NOTE: Python must be installed to execute the burner scripts.
%
% On Linux:
% call_uhd_app('sudo usrp2_card_burner_gui.py', '--list')
%
% On Windows:
% call_uhd_app('usrp2_card_burner_gui.py', '--list')
% 
% 3. Invoke the Python script to program an N210 rev4 with compatible 
%    firmware and FPGA images from Ettus Research to an N210 radio with
%    IP address of 192.168.10.2. You can also copy and use images created 
%    using the N210 targeting feature.
%
%    NOTE: Programming can take over 1 minute.  You will not see any output
%    until the process is complete.
%
% args = [' --addr="192.168.10.2"', ...
%         ' --fw=../../EttusResearch-UHD-Mirror-ad12df0/images/usrp_n210_fw.bin', ...
%         ' --fpga=../../EttusResearch-UHD-Mirror-ad12df0/images/usrp_n210_r4_fpga.bin', ...
%         ' --reset']
%
% On Linux:
% call_uhd_app('sudo usrp_n2xx_net_burner.py', args)
% 
% On Windows:
% call_uhd_app('usrp_n2xx_net_burner.py', args)
%
% ans =
% USRP-N2XX found.
% Hardware type: n210_r4
% Flash size: 4194304
% Sector size: 65536
% 
% Begin FPGA write: this should take about 1 minute...
% Erasing 1572864 bytes at 1572864
%
% Writing image
% Verifying data
% Read back 1298192 bytes
% Success.
% Time elapsed: 47.123201 seconds
% 
% 
% 
% Begin firmware write: this should take about 1 second...
% Erasing 31744 bytes at 3145728
% Writing image
% Verifying data
% Read back 16383 bytes
% Success.
% Time elapsed: 1.042979 seconds
%
% 4. Reprogram the IP address of a USRP from 192.168.10.2 to 192.168.20.2.
%
% args = '--args addr="192.168.10.2" --key ip-addr --val "192.168.20.2"';
% 
% On Linux:
% call_uhd_app('sudo usrp_burn_mb_eeprom', args)
%
% On Windows:
% call_uhd_app('usrp_burn_mb_eeprom', args)
%
% ans =
% linux; GNU C++ version 4.4.6; Boost_104400; UHD_003.002.003-vendor
% 
% Creating USRP device from address: addr=192.168.10.2
% -- Opening a USRP2/N-Series device...
% -- Current recv frame size: 1472 bytes
% -- Current send frame size: 1472 bytes
% 
% Fetching current settings from EEPROM...
%     EEPROM ["ip-addr"] is "192.168.10.2"
% 
% Setting EEPROM ["ip-addr"] to "192.168.20.2"...
% Power-cycle the USRP device for the changes to take effect.
% 
% Done
%

%   Copyright 2011-2012 The MathWorks, Inc.

if nargin == 1
    appArgs = '';
end

installdir = fileparts(mfilename('fullpath'));
arch       = computer('arch');

binAppsDir = fullfile(installdir, arch);
allBinApps = l_getAppsList(binAppsDir, arch);

usrproot     = sdruroot();
sandboxRoot = fullfile(matlabroot, 'toolbox', 'shared', 'sdr', 'sdru');
isBatInstall = strcmp(usrproot, sandboxRoot);

if isBatInstall
  pyAppsDir  = fullfile(sdruroot, 'uhdapps', 'utils');
else
  pyAppsDir  = fullfile(fileparts(sdruroot), 'EttusResearch-UHD-Mirror-ad12df0', 'host', 'utils');
end
allPyApps  = l_getAppsList(pyAppsDir, arch);

allApps    = [allBinApps, allPyApps];

if (strcmp('LIST_APPS', appName))
    r = sprintf(' %s\n', allApps{:});
    return;
end

% allow to execute as sudo for apps that need it.
if (strncmp('sudo ', appName, 5))
    appName  = appName(6:end);
    
    % Run a bogus system command to ensure that any password challenge is
    % seen by the caller.  when executing the "real" command, there should
    % be no challenge as the password remains valid for a period of time.
    s = system('sudo echo'); %#ok<NASGU>

    % Include environment to ensure libraries are found when executing as
    % root.
    execSudo = 'sudo LD_LIBRARY_PATH=$LD_LIBRARY_PATH ';
else
    execSudo = '';
end

if (any(strcmp(appName, allBinApps)))
    execFile = fullfile(binAppsDir, appName);
elseif (any(strcmp(appName, allPyApps)))
    execFile = fullfile(pyAppsDir, appName);
else
    allAppsStr = sprintf(' %s\n', allApps{:});
    error(message('sdru:uhdapp:unknownapp', appName, allAppsStr));
end

[s, r] = system([execSudo ' ' execFile ' ' appArgs]);

end

function appsList = l_getAppsList(appsDir, arch)
    appsFiles = dir(appsDir);
    appsList  = {appsFiles.name};
    
    % skip '.txt', '.', and '..' files
    idxValid = cellfun(@(x) (~any(regexp(x,'.txt$|^\.$|^\.\.$|.rules$|.cpp$|.hpp$'))), ...
      appsList, 'UniformOutput', false);
    appsList = appsList([idxValid{:}]);
    
    % remove trailing '.exe' on executables on windows
    if (any(strcmp(arch, {'win32','win64'})))
        appsList = strrep(appsList, '.exe', '');
    end

end
