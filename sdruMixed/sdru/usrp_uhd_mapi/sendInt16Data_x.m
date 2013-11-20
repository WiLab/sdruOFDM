function [underflow, errStat, errStr] = sendInt16Data_x( ...
    driverApiH, data, freq, loOffset, gain, interp, frameLength)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [underflow, errStat, errStr] = ...
        mapiPrivate('sendInt16Data_x', driverApiH, data, freq, loOffset, gain, interp, frameLength);
end

