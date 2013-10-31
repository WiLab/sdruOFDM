
%   Copyright 2011-2012 The MathWorks, Inc.

classdef(Enumeration) BoardIdCapiEnumT < int32
    enumeration
        RxId(0),
        TxId(1),
        MboardId(2)
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
