function [errStat, errStr] = closeDataConnection(driverApiH)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [errStat, errStr] = mapiPrivate('closeDataConnection', driverApiH);
end
