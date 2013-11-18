
%   Copyright 2011-2012 The MathWorks, Inc.

classdef(Enumeration) DataPortDataTypeSLCapiEnumT < Simulink.IntEnumType
    enumeration
        DPortDTypeInt16(0),
        DPortDTypeSingle(1),
        DPortDTypeDouble(2),
        DPortDTypeCInt16(3),
        DPortDTypeCSingle(4),
        DPortDTypeCDouble(5)
    end
    methods (Static=true)
        function retVal = getHeaderFile()
            retVal = 'usrp_uhd_capi.hpp';
        end
    end
end
