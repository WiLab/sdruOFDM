
%   Copyright 2011-2012 The MathWorks, Inc.

classdef(Enumeration) RefSourceCapiEnumT < int32
    enumeration
        Internal(0),
        External(1),
        Automatic(2)
    end
    methods (Static=true)
        function retVal = getHeaderFile()
            retVal = 'usrp_uhd_capi.hpp';
        end
    end
end
