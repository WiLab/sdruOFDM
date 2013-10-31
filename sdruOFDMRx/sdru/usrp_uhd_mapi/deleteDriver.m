function [errStat, errStr] = deleteDriver(driverApiH)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [errStat, errStr] = mapiPrivate('deleteDriver', driverApiH);
end
