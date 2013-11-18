
%   Copyright 2011-2012 The MathWorks, Inc.

classdef(Enumeration) PPSPolarityCapiEnumT < int32
    enumeration
        Positive(0),
        Negative(1)
    end
    methods (Static=true)
        function retVal = getHeaderFile()
            retVal = 'usrp_uhd_capi.hpp';
        end
    end
end
