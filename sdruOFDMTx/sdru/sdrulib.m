function sdrulib
%SDRULIB Open the Communications System Toolbox Support Package for USRP(R) Radio block library.
%
%   SDRULIB opens the latest version of the Communications System Toolbox
%   Support Package for USRP(R) Radio block library.
%
%   For additional information on Communications System Toolbox Support
%   Package for USRP(R) Radio, type 'help sdru' at the MATLAB command
%   prompt.
%   USRP is a trademark of National Instruments Corp.

%   Copyright 2011-2012 The MathWorks, Inc.

if ~issimulinkinstalled
  error(message('sdru:sdrulib:simulinkLicenseFailed'));
end

% Attempt to open library
try
   open_system('commsdrhw_v2');
catch %#ok<CTCH>
   error(message('sdru:sdrulib:notFound'));
end

% [EOF]
