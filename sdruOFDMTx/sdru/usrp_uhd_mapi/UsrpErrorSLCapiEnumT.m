
%   Copyright 2011-2012 The MathWorks, Inc.

classdef(Enumeration) UsrpErrorSLCapiEnumT < Simulink.IntEnumType
    enumeration
        UsrpDriverError(0),
        UsrpDriverSuccess(1)
    end
    methods (Static=true)
        function retVal = getHeaderFile()
            retVal = 'usrp_uhd_capi.hpp';
        end
    end
end
