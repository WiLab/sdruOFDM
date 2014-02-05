function [ data ] = fileSource( filename )

coder.extrinsic('fopen','fread','fclose');

fid = fopen(filename,'r');
tmp = fread(fid,'char');
fclose(fid);

data = char(tmp);


end

