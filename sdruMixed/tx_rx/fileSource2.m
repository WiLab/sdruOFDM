function [ data ] = fileSource2( filename )

% Read file 'filename' and return a MATLAB string with the contents
% of the file. Internally C functions fopen/fread are used to read
% data from the file.

% The 'fprintf' function will not be compiled and instead passed
% to the MATLAB runtime. If we choose to generate code for this example,
% all calls to extrinsic functions are automatically eliminated.
coder.extrinsic('fprintf');

% Put class and size constraints on function input.
assert(isa(filename, 'char'));
assert(size(filename, 1) == 1);
assert(size(filename, 2) <= 1024);

% Define a new opaque variable 'f' which will be of type 'FILE *'
% in the generated C code initially with the value NULL.
f = coder.opaque('FILE *', 'NULL');

% Call fopen(filename 'r'), but we need to convert the MATLAB
% string into a C type string (which is the same string with the
% NUL (\0) string terminator).
f = coder.ceval('fopen', c_string(filename), c_string('r'));

% Call fseek(f, 0, SEEK_END) to set file position to the end of
% the file.
coder.ceval('fseek', f, int32(0), coder.opaque('int', 'SEEK_END'));

% We need to initialize the variable 'filelen' to the proper type
% as custom C functions are not analyzed.
filelen = int32(0);

% Call ftell(f) which will return the length of the file in bytes
% (as current file position is at the end of the file).
filelen = coder.ceval('ftell', f);

% Reset current file position
coder.ceval('fseek', f, int32(0), coder.opaque('int', 'SEEK_SET'));

% Initialize a buffer
%buffer = zeros(1,2^20,'uint8');
buffer = char(zeros(1,2^20));

% Remaining is the number of bytes to read (from the file)
remaining = filelen;

% Index is the current position to read into the buffer
index = int32(1);

while remaining > 0
    % Buffer overflow?
    if remaining + index > size(buffer,2)
        fprintf('Attempt to read file which is bigger than internal buffer.\n');
        fprintf('Current buffer size is %d bytes and file size is %d bytes.\n', size(buffer,2), filelen);
        break
    end
    % Read as much as possible from the file into internal buffer
    n = int32(0);
    n = coder.ceval('fread', coder.ref(buffer(index)), int32(1), remaining, f);
    if n == 0
        % Nothing more to read
        break;
    end
    % Did something went wrong when reading?
    if n < 0
        fprintf('Could not read from file: %d.\n', n);
        break;
    end
    % Update state variables
    remaining = remaining - n;
    index = index + n;
end

% Close file
coder.ceval('fclose', f);

data = char(buffer(1:index));

end

% Create a NUL terminated C string given a MATLAB string
function y = c_string(s)
y = [s 0];

end

