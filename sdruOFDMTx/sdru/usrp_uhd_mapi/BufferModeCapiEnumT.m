
%   Copyright 2011-2012 The MathWorks, Inc.

classdef(Enumeration) BufferModeCapiEnumT < int32
    enumeration
        BuffModeContinuous(0),
        BuffModeContigBuff(1),
        BuffModeContigFrame(2)
    end
    methods (Static=true)
        function retVal = getHeaderFile()
            retVal = 'usrp_uhd_capi.hpp';
        end
        function retVal = addClassNameToEnumNames()
            retVal = false;
        end
    end
end
