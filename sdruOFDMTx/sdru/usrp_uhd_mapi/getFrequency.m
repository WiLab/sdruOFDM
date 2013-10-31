function [actualValue, errStat, errStr] = getFrequency(driverApiH)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [actualValue, errStat, errStr] = mapiPrivate('getFrequency', driverApiH);
end
