function flag = checkIPAddressFormat(aAddrs, addrsName)
%checkIPAddressFormat IP address format checker
%
%   Warning: This function is an internal MathWorks function and may be removed
%   in a future release.
%
%   checkIPAddressFormat(ADDRS, NAME) returns true if the ADDRS is a valid
%   dotted quad IP address. Otherwise, it errors out and prompts that variable
%   NAME is not a valid IP address.
%
%   % Example:
%   %   Check if the string '192.168.10.a' is a valid IP address for variable
%   %   IPAddress
%   checkIPAddressFormat('192.168.10.a', 'IPAddress')

%   Copyright 2012 The MathWorks, Inc.
%#codegen

nargchk(2,2,nargin,'struct');  %#ok

coder.internal.errorIf(~ischar(aAddrs), ...
    'sdru:checkIPAddressFormat:InvalidIPAddress', addrsName);
coder.internal.errorIf(~isrow(aAddrs), ...
    'sdru:checkIPAddressFormat:InvalidIPAddress', addrsName);

coder.internal.errorIf(~ischar(addrsName), ...
    'sdru:checkIPAddressFormat:InvalidIPAddressName');
coder.internal.errorIf(~isrow(addrsName), ...
    'sdru:checkIPAddressFormat:InvalidIPAddressName');

% Look for three dots
dotIndices = find(aAddrs == '.'); % Used instead of findstr since
% findstr does not generate code
coder.internal.errorIf(length(dotIndices) ~= 3, ...
  'sdru:checkIPAddressFormat:InvalidIPAddress', addrsName);

% Check if all the elements other than the dots are numbers
num1 = aAddrs(1:dotIndices(1)-1);
num2 = aAddrs(dotIndices(1)+1:dotIndices(2)-1);
num3 = aAddrs(dotIndices(2)+1:dotIndices(3)-1);
num4 = aAddrs(dotIndices(3)+1:length(aAddrs));

checkNumeric(int16(num1), addrsName);
checkNumeric(int16(num2), addrsName);
checkNumeric(int16(num3), addrsName);
checkNumeric(int16(num4), addrsName);

flag = true;
end

function checkNumeric(x, addrsName)
coder.internal.errorIf(...
  isempty(x) || any(~((x >= 48) & (x <= 57))), ...
  'sdru:checkIPAddressFormat:InvalidIPAddress', addrsName);
end
