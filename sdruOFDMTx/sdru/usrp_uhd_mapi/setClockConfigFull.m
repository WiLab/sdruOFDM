function [errStat, errStr] = setClockConfigFull(driverApiH, clockConfig)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [errStat, errStr] = mapiPrivate('setClockConfigFull', driverApiH, clockConfig);
end
