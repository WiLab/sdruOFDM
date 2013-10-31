function [actualValue, errStat, errStr] = setRate(driverApiH, desiredValue)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [actualValue, errStat, errStr] = mapiPrivate('setRate', driverApiH, desiredValue);
end
