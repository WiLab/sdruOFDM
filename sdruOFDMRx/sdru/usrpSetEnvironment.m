function usrpSetEnvironment
%usrpSetEnvironment Setup MATLAB to work with Communications System Toolbox Support Package for USRP(R) 
%   Software Defined Radio. 
%   usrpSetEnvironment sets up architecture-specific environment variables
%   once each time a new Support Package for USRP(R) Software Defined
%   Radio is installed.
%   USRP(R) is a trademark of National Instruments Corp.

%   Copyright 2011-2012 The MathWorks, Inc.
%   $Revision: 1.1.6.4 $  $Date: 2012/10/24 04:44:33 $

arch = computer('arch');
installdir = fileparts(mfilename('fullpath'));

% script sets the system environment variables:
setupsdru(installdir, 'verbose');

% Add a shortcut for USRP setup to the MATLAB shortcuts bar.
%
% First remove it if it's already there so we don't end up with
% multiples. Have not found a way to detect if it exists so just go
% ahead and assume it does.
scWidget = com.mathworks.mlwidgets.shortcuts.ShortcutUtils;
scWidget.removeShortcut(scWidget.getDefaultToolbarCategoryName, ...
  'Add SDRu');

% figure out if we have a relative path or absolute path
% In this case we don't care if fileparts treats the folder name as
% a filename. We only care about finding out if the user put
% an absolute path in front of it.

switch (arch)
    case {'win64','win32'}
        % Windows
        [index] = regexp(installdir, ':', 'start');
        if isempty(index)
            absoluteDestDir = fullfile(pwd, installdir);
        else
            absoluteDestDir = installdir;
        end
        
    case {'glnxa64','glnx86'}
        if ~strcmp(installdir(1), '/')
            absoluteDestDir = fullfile(pwd, installdir);
        else
            absoluteDestDir = installdir;
        end
        
    case 'maci64'
        if ~strcmp(installdir(1), '/')
            absoluteDestDir = fullfile(pwd, installdir);
        else
            absoluteDestDir = installdir;
        end
        setupSdruRcFile(installdir);
end

absoluteInstallDir = fullfile(absoluteDestDir);

% Construct the commands for the shortcut to be added to the
% shortcut bar. These commands have to add the installation dir to
% the user's MATLAB path and run setupsdru.
s0 = sprintf('setupsdru');
s1 = sprintf('(''%s''', absoluteInstallDir);
s2 = sprintf(', ''verbose'');\n');
s3 = sprintf('disp(''USRP(R) is a trademark of National Instruments Corp.'');\r\n');
shortcutString = sprintf('%s%s%s%s', s0, s1, s2, s3);

scWidget.addShortcutToBottom('Add SDRu', shortcutString, 'Standard icon', ...
    scWidget.getDefaultToolbarCategoryName, 'true');

envCmdString  = sprintf('%s%s);\r\n', s0, s1);
finishString0 = sprintf('You must set up the environment in each MATLAB session to use the Communications');
finishString1 = sprintf('System Toolbox Support Package for USRP(R) Radio.  As a convenience this has been');
finishString2 = sprintf('done for you in this session and a shortcut has been placed on the MATLAB shortcut');
finishString3 = sprintf('bar.  You can use that shortcut in each future session or automate this step by adding');
finishString4 = sprintf('\t%s to your startup.m file. \r\n', envCmdString);

disp(finishString0);
disp(finishString1);
disp(finishString2);
disp(finishString3);
disp(finishString4);
disp('USRP(R) is a trademark of National Instruments Corp.');

end

