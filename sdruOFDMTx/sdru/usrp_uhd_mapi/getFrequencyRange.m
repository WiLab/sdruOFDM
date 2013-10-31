function [freqRange, errStat, errStr] = getFrequencyRange(driverApiH)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [freqRange, errStat, errStr] = mapiPrivate('getFrequencyRange', driverApiH);
end
