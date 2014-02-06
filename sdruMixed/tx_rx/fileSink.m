function [ done ] = fileSink( data, filename )

% fileSink: Takes in data originally created by the function 'fileSource'
% which assumes the data is arranged as chars.  The EOF is triggered by
% an addition of three characters END at the end of the message

coder.extrinsic('fopen','fwrite','fclose');
done = 0;% File complete flag

% End of file?
val = strfind(data,'END---');

% Strip message
if ~isempty(val)
    message = data(1:val(1,1)-1);
    done=1;
    % Stub frame found, skip writing to file (save some time)
    if val(1,1)==1
        return;
    end 
% Frame full of data    
else
    message = data;
end

% Write message to file
fid = fopen(filename,'a+');
fwrite(fid,message);
fclose(fid);



end

