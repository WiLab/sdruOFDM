function [data, dataLength, overflow, errStat, errStr] = receiveData( ...
    driverApiH, freq, loOffset, gain, decim, frameLength, dportDtype)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [data, dataLength, overflow, errStat, errStr] = ...
        mapiPrivate('receiveData', driverApiH, freq, loOffset, gain, decim, frameLength, dportDtype);
end

