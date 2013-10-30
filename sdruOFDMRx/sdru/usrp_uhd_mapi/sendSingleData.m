function [underflow, errStat, errStr] = sendSingleData( ...
    driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype)
%#codegen
    % bug: must pass as top-level arg
    % dportDtype = DataPortDataTypeCapiEnumT.DPortDTypeSingle;

%   Copyright 2011-2012 The MathWorks, Inc.

    [underflow, errStat, errStr] = ...
        mapiPrivate('sendSingleData', driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype);
end

