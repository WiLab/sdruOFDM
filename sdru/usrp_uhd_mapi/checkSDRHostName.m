function [errStat, errStr] = checkSDRHostName(deploymentHostName)
%#codegen

%   Copyright 2011-2012 The MathWorks, Inc.

    [errStat, errStr] = mapiPrivate('checkSDRHostName', deploymentHostName);
end
