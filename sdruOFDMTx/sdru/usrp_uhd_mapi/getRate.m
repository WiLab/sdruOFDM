function [actualValue, errStat, errStr] = getRate(driverApiH)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [actualValue, errStat, errStr] = mapiPrivate('getRate', driverApiH);
end
