function [tuneResult, errStat, errStr] = setFrequency(driverApiH, desiredFreq, desiredLoOffset)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [tuneResult, errStat, errStr] = mapiPrivate('setFrequency', driverApiH, desiredFreq, desiredLoOffset);
end
