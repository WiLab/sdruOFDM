function myException = ...
    updateTgtParamFromEditSdru(block, targetBlock, param, editName )
% UPDATETGTPARAMFROMEDIT Update target parameters in a target block from an
%                        edit control.
%
% Inputs: block       - the 'Model Parameters' block
%         targetBlock - the block to receive the parameter
%         param       - name of the parameter in the targetBlock to be 
%                       changed
%         editName    - name of the parameter in the 'Model Parameters' 
%                       block whose value will be written to 'param'
%
% Outputs: myException - mException object in case of set_param failure
%
% See also UPDATETGTPARAMFROMPOPUP.

%   Copyright 2011-2012 The MathWorks, Inc.

myException = [];
% -- Get variables from mask
WsVar = get_param(block, 'MaskWsVariables');

% -- get selected value
idx = strncmp(editName, {WsVar.Name}, length(editName));  
valNew = WsVar(idx).Value;

try
    set_param(targetBlock, param, num2str(valNew));
catch myException
end

% EOF