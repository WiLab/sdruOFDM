function [ data ] = fileSource( filename, charsPerPacket )

% Get file to tx
%data = fileSource2(filename);



% Write message to file
coder.extrinsic('fopen','fread','fclose','fseek','ftell');
fid = fopen(filename,'r');
fseek(fid,0,1);
fseek(fid,0,-1);
filelen = int32(0);
filelen = int32(ftell(fid));% Call ftell(f) which will return the length of the file in bytes
                                    % (as current file position is at the end of the file).

data = char(zeros(1,int32(filelen)));%(1:int32(filelen))
data = char(fread(fid,'char')).';



fclose(fid);



% Pad data
if mod(length(data),charsPerPacket)>0
    data = [data,'END',repmat('-',1,charsPerPacket - 3 - mod(length(data),charsPerPacket))];
else %Add stubframe for EOF
    data = [data,'END',repmat('-',1,charsPerPacket - 3)];
end


end

