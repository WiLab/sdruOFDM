function htmlFile = usrphelp
% USRPHELP  USRP help function.
% Returns path to the HTML help information file corresponding to the
% overall USRP documentation and example help.
%

% Copyright 2011-2012 The MathWorks, Inc.
% $Revision: 1.1.6.1 $ $Date: 2012/08/21 01:18:34 $

% Find the full path of the System object
sysObjPath = which('comm.SDRuReceiver');

% Get the sdru folder path. We need to remove +comm dir too.
sdruFolder = strrep(fileparts(sysObjPath), [filesep '+comm'], '');

% Construct full path to the html file.  The file must live in a 'help'
% folder below the location of the commsdrhw2_v2 library.
htmlFile = [sdruFolder filesep 'help' filesep 'index.html'];

% [EOF]
