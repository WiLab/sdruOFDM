function y = sdruExample(a)
%sdruExample An example function to compile with compilesdru
%   Y = sdruExample(A) receives a frame of data from the USRP(R) device
%   and applies a gain of A before returning in Y.
%
%   USRP is a trademark of National Instruments Corp.

%   Copyright 2011-2012 The MathWorks, Inc.

%#codegen

persistent h

if isempty(h)
  h = comm.SDRuReceiver('192.168.10.2', ...
    'OutputDataType', 'double');
end

y = a * step(h);

release(h);
