%COMPILESDRU Compile function with MATLAB Coder(TM) for use with USRP(R)
%   COMPILESDRU(FCN) compiles the function, FCN, that contains SDRu
%   System objects to generate a MEX function. This function accepts all
%   the inputs that the CODEGEN function accepts.
%
%   COMPILESDRU(FCN, OPTION) compiles the function, FCN, that
%   contains SDRu System objects to generate a compiled file based on the
%   OPTION input. OPTION can be 'MEX', 'LIB', 'DLL', or 'EXE'. Type 'help
%   coder.config' for more information on these options. IF you also
%   provide a coder configuration object with the '-config' option, then
%   OPTION is ignored.
%
%   CFG = COMPILESDRU(FCN, ...) returns the MATLAB Coder code
%   generation configuration object, CFG, used for compilation.
%
%   % Example:
%   %   Generate a mex file called foo from the function sdruExample
%   compilesdru('sdruExample', 'mex', '-args', 2, ...
%                      '-o', 'foo', '-g', '-launchreport')
%
%   See also comm.SDRuReceiver, comm.SDRuTransmitter, codegen.

 
%   Copyright 2011-2012 The MathWorks, Inc.

