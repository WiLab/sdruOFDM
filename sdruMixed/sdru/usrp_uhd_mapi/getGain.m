function [actualValue, errStat, errStr] = getGain(driverApiH)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [actualValue, errStat, errStr] = mapiPrivate('getGain', driverApiH);
end
