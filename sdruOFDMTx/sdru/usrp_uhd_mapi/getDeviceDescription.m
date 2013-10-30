function [descStr, errStat, errStr] = getDeviceDescription(driverApiH)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [descStr, errStat, errStr] = mapiPrivate('getDeviceDescription', driverApiH);
end
