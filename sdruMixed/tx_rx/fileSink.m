function [ data ] = fileSink( filename )

coder.extrinsic('fopen','fread','fclose');

fid = fopen(filename,'r');
data = fread(fid);
fclose(fid);



end

