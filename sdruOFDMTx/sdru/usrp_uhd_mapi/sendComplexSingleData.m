function [underflow, errStat, errStr] = sendComplexSingleData( ...
    driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype)
%#codegen
    % bug: must pass as top-level arg
    % dportDtype = DataPortDataTypeCapiEnumT.DPortDTypeCSingle;

%   Copyright 2011-2012 The MathWorks, Inc.

    [underflow, errStat, errStr] = ...
        mapiPrivate('sendComplexSingleData', driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype);
end

