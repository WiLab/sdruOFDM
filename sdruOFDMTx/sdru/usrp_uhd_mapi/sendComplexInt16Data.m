function [underflow, errStat, errStr] = sendComplexInt16Data( ...
    driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype)
%#codegen
    % bug: must pass as top-level arg
    % dportDtype = DataPortDataTypeCapiEnumT.DPortDTypeCInt16;

%   Copyright 2011-2012 The MathWorks, Inc.

    [underflow, errStat, errStr] = ...
        mapiPrivate('sendComplexInt16Data', driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype);
end

