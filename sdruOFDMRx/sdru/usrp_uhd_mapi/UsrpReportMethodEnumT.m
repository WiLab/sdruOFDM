
%   Copyright 2012 The MathWorks, Inc.

classdef(Enumeration) UsrpReportMethodEnumT < int32
    enumeration
        Warning(0),
        Error(1),
        None(2),
    end
    methods (Static=true)
        function retVal = addClassNameToEnumNames()
            retVal = false;
        end
    end
end
