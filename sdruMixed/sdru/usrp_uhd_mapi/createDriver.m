function [driverApiH, errStat, errStr] = createDriver(addr, boardId, requester) 
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [driverApiH, errStat, errStr] = mapiPrivate('createDriver', addr, boardId, requester);
end
