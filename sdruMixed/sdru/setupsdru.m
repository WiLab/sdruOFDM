function setupsdru(varargin)
%SETUPSDRU Set up MATLAB to work with Communications System Toolbox Support Package for USRP(R) Radio
%   SETUPSDRU sets up architecture-specific environment variables for
%   Communications System Toolbox Support Package for USRP(R) Radio. This
%   must be done in every MATLAB session.
%
%   You can automate this step in future sessions by adding "setupsdru" to
%   your startup.m file.
%
%   If you prefer to do this setup manually in each session, you can use
%   the "Add SDRu" shortcut that has been provided on the MATLAB shortcut
%   bar.
%
%   USRP(R) is a trademark of National Instruments Corp.

%   Copyright 2011-2012 The MathWorks, Inc.

narginchk(0,2)

if nargin > 0
  installdir = varargin{1};
  validateattributes(installdir, {'char'}, {'row'}, 1)
  if (exist(installdir,'file') ~= 7)
    error(message('sdru:setupsdru:DirNotExist'))
  end
else
  installdir = fileparts(mfilename('fullpath'));
end

if nargin > 1
    silentMode = varargin{2};
    validatestring(silentMode, {'silent', 'verbose'}, 2);
else
    silentMode = 'silent';
end

% lib path entries
arch = computer('arch');
switch (arch)
    case {'win64','win32'}
        libpathvar  = 'PATH';
        add2env(libpathvar, fullfile(installdir,'bin',arch));
        add2env(libpathvar, fullfile(installdir,'lib',arch));
        
    case {'glnxa64','glnx86'}
        libpathvar  = 'LD_LIBRARY_PATH';
        add2env(libpathvar, fullfile(installdir,'bin',arch));
        
    case 'maci64'
        setupSdruRcFile(installdir);
end

% Finish
if (~strcmp(silentMode, 'silent'))
    
    fprintf('Setup complete.\n');
    
    fprintf('<a href="matlab:sdrulib">sdrulib</a>         - Open the Communications System Toolbox Support Package for USRP(R) Radio block library.\n');
    fprintf('<a href="matlab:help sdru">help SDRu</a>       - Type "help SDRu" to get help for Communications System Toolbox Support Package for USRP(R) Radio.\n');
    fprintf('\r\n');
end
end

%--------------------------------------------------------------------------
function add2env(libpathvar, addVal)
curVal = getenv(libpathvar);

idx = strfind(curVal, addVal);
if isempty(idx)
  setenv(libpathvar, [addVal pathsep curVal]);
end

end
