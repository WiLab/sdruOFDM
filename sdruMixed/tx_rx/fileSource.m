function [ data ] = fileSource( filename, charsPerPacket )

% Get file to tx
data = fileSource2(filename);

% Pad data
if mod(length(data),charsPerPacket)>0
    data = [data,'END',repmat('-',1,charsPerPacket - 3 - mod(length(data),charsPerPacket))];
else %Add stubframe for EOF
    data = [data,'END',repmat('-',1,charsPerPacket - 3)];
end


end

