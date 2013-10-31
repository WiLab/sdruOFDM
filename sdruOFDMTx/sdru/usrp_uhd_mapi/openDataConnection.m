function [driverApiH, errStat, errStr] = openDataConnection(addr, boardId, requester, frameLength, dportType, buffMode, buffSize) 
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [driverApiH, errStat, errStr] = mapiPrivate('openDataConnection', addr, boardId, requester, frameLength, dportType, buffMode, buffSize);
end
