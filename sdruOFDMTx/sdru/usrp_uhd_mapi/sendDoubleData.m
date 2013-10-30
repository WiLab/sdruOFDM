function [underflow, errStat, errStr] = sendDoubleData( ...
    driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype)
%#codegen
    % bug: must pass as top-level arg
    % dportDtype = DataPortDataTypeCapiEnumT.DPortDTypeDouble;

%   Copyright 2011-2012 The MathWorks, Inc.

    [underflow, errStat, errStr] = ...
        mapiPrivate('sendDoubleData', driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype);
end

