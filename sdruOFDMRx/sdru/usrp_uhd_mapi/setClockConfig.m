function [errStat, errStr] = setClockConfig(driverApiH, clockConfig)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [errStat, errStr] = mapiPrivate('setClockConfig', driverApiH, clockConfig);
end
