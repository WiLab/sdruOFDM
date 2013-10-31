function [gainRange, errStat, errStr] = getGainRange(driverApiH)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [gainRange, errStat, errStr] = mapiPrivate('getGainRange', driverApiH);
end
