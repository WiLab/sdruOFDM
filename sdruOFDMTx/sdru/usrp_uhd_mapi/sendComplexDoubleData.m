function [underflow, errStat, errStr] = sendComplexDoubleData( ...
    driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype)
%#codegen
    % bug: must pass as top-level arg
    % dportDtype = DataPortDataTypeCapiEnumT.DPortDTypeCDouble;

%   Copyright 2011-2012 The MathWorks, Inc.

    [underflow, errStat, errStr] = ...
        mapiPrivate('sendComplexDoubleData', driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype);
end

