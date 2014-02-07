function [ done ] = fileSink( data, filename )

% fileSink: Takes in data originally created by the function 'fileSource'
% which assumes the data is arranged as chars.  The EOF is triggered by
% an addition of three characters END at the end of the message

%coder.extrinsic('fopen','fwrite','fclose');
done = 0;% File complete flag

% End of file?
val = strfind(data,'END---');

% Strip message
if ~isempty(val)
    message = data(1:val(1,1)-2);%need to remove additional \n character created by the ceval functions
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

% Put class and size constraints on function output.
assert(isa(filename, 'char'));
assert(size(filename, 1) == 1);
assert(size(filename, 2) <= 1024);

n = int32(0);
f = coder.opaque('FILE *', 'NULL');
f = coder.ceval('fopen', c_string(filename), c_string('a+'));

for k = 1:length(message)
    coder.ceval('fwrite', coder.ref(message(k)), int32(1), int32(1) ,f);
end


% Close file
coder.ceval('fclose', f);


end

% Create a NUL terminated C string given a MATLAB string
function y = c_string(s)
y = [s 0];

end
