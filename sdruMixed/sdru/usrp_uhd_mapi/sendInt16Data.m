function [underflow, errStat, errStr] = sendInt16Data( ...
    driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype)
%#codegen
    % bug: must pass as top-level arg
    %dportDtype = DataPortDataTypeCapiEnumT.DPortDTypeInt16;

%   Copyright 2011-2012 The MathWorks, Inc.

    [underflow, errStat, errStr] = ...
        mapiPrivate('sendInt16Data', driverApiH, data, freq, loOffset, gain, interp, frameLength, dportDtype);
end

