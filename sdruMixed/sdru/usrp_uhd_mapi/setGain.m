function [actualValue, errStat, errStr] = setGain(driverApiH, desiredValue)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [actualValue, errStat, errStr] = mapiPrivate('setGain', driverApiH, desiredValue);
end
