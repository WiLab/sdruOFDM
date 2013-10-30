
%   Copyright 2011-2012 The MathWorks, Inc.

classdef(Enumeration) PPSSourceCapiEnumT < int32
    enumeration
        Internal(0),
        External(1)
    end
    methods (Static=true)
        function retVal = getHeaderFile()
            retVal = 'usrp_uhd_capi.hpp';
        end
    end
end
