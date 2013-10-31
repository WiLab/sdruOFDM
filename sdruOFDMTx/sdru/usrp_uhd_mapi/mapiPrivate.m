function varargout = mapiPrivate(cmd, varargin)
%#codegen
%
% This function unifies handling of interp vs. codegen call as well as
% errStat / errStr assignment.
%
    
%   Copyright 2011-2012 The MathWorks, Inc.

coder.extrinsic('setupsdru')
coder.extrinsic('sdruroot')

persistent isSetupsdruCalled
if isempty(isSetupsdruCalled)
  isSetupsdruCalled = false;
end

if ~isSetupsdruCalled && (isempty(coder.target()) || strcmp(coder.target(), 'mex'))
    setupsdru(sdruroot, 'silent')
    isSetupsdruCalled = true;
end
  
MAX_STR_SIZE                = 128;   % These sizes must match those in C code.
MAX_DEV_DESCR_STR_SIZE      = 1024;
MAX_ERROR_MESSAGE_LENGTH    = 1024;
MAX_FRAMELENGTH             = 46336; % Arbitrary max imposed on ML/SL side

% function is being called in interpreted mode
if (isempty(coder.target()))
    % Lock the mex file if called from MATLAB. This is not called for generated code.
    % Locking the mex file in MATLAB prevents MATLAB from hanging if clear all is called.
    % Clear all first deletes mex files. That removes the driver and hangs MATLAB if a 
    % driver is in use, i.e. System object is locked.
    usrp_uhd_mapi('sdruMexLock');

    switch (cmd)
        case {'reportDrivers', 'getSDRuDriverVersion'}
            [retStr, errStat, errStr] = usrp_uhd_mapi(cmd);
            varargout{1} = retStr;
            
        case {'getSDRuList', 'getDeviceDescription'}
            [retStr, errStat, errStr] = usrp_uhd_mapi(cmd, varargin{:});
            varargout{1} = retStr;
            
        case {'deleteDriver', 'setClockConfig', 'setClockConfigFull', 'closeDataConnection', 'checkSDRHostName'}
            [errStat, errStr] = usrp_uhd_mapi(cmd, varargin{:});
            
        case {'createDriver',  ...
              'setRate', 'setFrequency', 'setGain', ...
              'getRate', 'getFrequency', 'getGain', ...
              'getFrequencyRange', 'getGainRange', ...
              'openDataConnection'}
            [varargout{1}, errStat, errStr] = usrp_uhd_mapi(cmd, varargin{:});
           
        case {'sendInt16Data',  'sendComplexInt16Data', ...
              'sendSingleData', 'sendComplexSingleData', ...
              'sendDoubleData', 'sendComplexDoubleData', ...
              'sendInt16Data_x'}
            [varargout{1}, errStat, errStr] = usrp_uhd_mapi(cmd, varargin{:});
            
        case 'receiveData'
            [varargout{1}, varargout{2}, varargout{3}, errStat, errStr] = ...
                usrp_uhd_mapi(cmd, varargin{:});
    end
    
% function is being called in codegen mode
else
    % not being found: 
    % eml_allow_enum_inputs;
    %errStat_i = int32(0);
    errStat_i = UsrpErrorCapiEnumT(0);
    errStr  = char(zeros(1,MAX_ERROR_MESSAGE_LENGTH));
    coder.varsize('errStr');
    errStrSize = int32(0);
    
    cmd_c = [cmd '_c'];
    
    switch (cmd)
        case {'sdruMexLock'}
             coder.ceval('mexLock');
        case {'reportDrivers', 'getSDRuDriverVersion'}
            flatAddrList     = char(zeros(1,MAX_STR_SIZE));
            coder.varsize('flatAddrList');
            flatAddrListSize = int32(0);
            coder.ceval(cmd_c, coder.ref(flatAddrList), coder.wref(errStat_i), coder.ref(errStr));
            flatAddrListSize = coder.ceval('strlen', coder.rref(flatAddrList));
            assert(flatAddrListSize <= MAX_STR_SIZE);
            flatAddrList     = flatAddrList(1:flatAddrListSize);
            varargout{1}     = flatAddrList;
            
        case {'getSDRuList'}
            addr_null= [varargin{1} 0];
            addr_c   = coder.opaque('char *');
            addr_c   = coder.ceval('(char *)', coder.rref(addr_null));
            flatAddrList     = char(zeros(1,MAX_STR_SIZE));
            coder.varsize('flatAddrList');
            flatAddrListSize = int32(0);
            coder.ceval(cmd_c, addr_c, coder.ref(flatAddrList), coder.wref(errStat_i), coder.ref(errStr));
            flatAddrListSize = coder.ceval('strlen', coder.rref(flatAddrList));
            assert(flatAddrListSize <= MAX_STR_SIZE);
            flatAddrList     = flatAddrList(1:flatAddrListSize);
            varargout{1}     = flatAddrList;

        case {'createDriver'}
            % NOTE: we expect to treat input strings as uint8 arrays in this
            % code.  If we did not, then if the MATLAB char array involved chars
            % that took up >1 byte, we'd get an error from the coder mex about
            % the array size changing.  ("The conversion from a unicode string
            % to a local code page changes the number of characters.  This is 
            % not supported.") For example, a block name of foo??ball will 
            % error out.
            %
            % The following code will handle input strings that have been passed
            % in as uint8 arrays.  Callers must do the casting.
            %
            driverApiH = int32(0);
            addr_null= [varargin{1} 0];
            addr_c   = coder.opaque('char *');
            addr_c   = coder.ceval('(char *)', coder.rref(addr_null));
            req_null = [varargin{3} 0];
            req_c    = coder.opaque('char *');
            req_c    = coder.ceval('(char *)', coder.rref(req_null));
            coder.ceval(cmd_c, addr_c, varargin{2}, req_c, ...
                        coder.wref(driverApiH), coder.wref(errStat_i), coder.ref(errStr));
            varargout{1} = driverApiH;
            % Tell coder that addr_null & req_null must be alive and separate throughout the call to cmd_c.
            coder.ceval('(void)', coder.rref(addr_null)); 
            coder.ceval('(void)', coder.rref(req_null));

        case {'openDataConnection'}
            % varargin   1      2         3          4              5       6         7
            %           addr, boardId, requester, frameLength, dportType, buffMode, buffSize
            % varargout  1         2         3
            %           driverH, errStat, errMsg
            driverApiH = int32(0);
            addr_null= [varargin{1} 0];
            addr_c   = coder.opaque('char *');
            addr_c   = coder.ceval('(char *)', coder.rref(addr_null));
            req_null = [varargin{3} 0];
            req_c    = coder.opaque('char *');
            req_c    = coder.ceval('(char *)', coder.rref(req_null));
            assert(varargin{4}<=MAX_FRAMELENGTH);
            frameLength = uint32(varargin{4});
            buffSize    = uint32(varargin{7});

            coder.ceval(cmd_c, addr_c, varargin{2}, req_c, frameLength, ...
                        varargin{5}, varargin{6}, buffSize, ...
                        coder.wref(driverApiH), coder.wref(errStat_i), coder.ref(errStr));
            varargout{1} = driverApiH;
            % Tell coder that addr_null & req_null must be alive and separate throughout the call to cmd_c.
            coder.ceval('(void)', coder.rref(addr_null)); 
            coder.ceval('(void)', coder.rref(req_null));
            
        case {'deleteDriver', 'setClockConfig', 'closeDataConnection'}
            coder.ceval(cmd_c, varargin{:}, coder.wref(errStat_i), coder.ref(errStr));
            
        case {'checkSDRHostName'}
            addr_null= [varargin{1} 0];
            addr_c   = coder.opaque('char *');
            addr_c   = coder.ceval('(char *)', coder.rref(addr_null));
            coder.ceval(cmd_c, addr_c, coder.wref(errStat_i), coder.ref(errStr));
            % Tell coder that addr_null  must be alive throughout the call to cmd_c.
            coder.ceval('(void)', coder.rref(addr_null)); 
            
        case 'getDeviceDescription'
            descStr = char(zeros(1,MAX_DEV_DESCR_STR_SIZE));
            coder.varsize('descStr');
            descStrSize = int32(0);
            coder.ceval(cmd_c, varargin{:}, coder.ref(descStr), coder.wref(errStat_i), coder.ref(errStr));
            descStrSize = coder.ceval('strlen', coder.rref(descStr));
            assert(descStrSize <= MAX_DEV_DESCR_STR_SIZE);
            descStr = descStr(1:descStrSize);
            varargout{1} = descStr;
            
        case 'setClockConfigFull'
            localClockConfig = varargin{2};
            coder.cstructname(localClockConfig, 'ClockConfigCapiT', 'extern');
            coder.ceval(cmd_c, varargin{1}, localClockConfig, coder.wref(errStat_i), coder.ref(errStr));
            
        case {'setRate', 'setGain', 'getRate', 'getFrequency', 'getGain'}
            actualValue = double(0);
            coder.ceval(cmd_c, varargin{:}, ...
                        coder.wref(actualValue), coder.wref(errStat_i), coder.ref(errStr));
            varargout{1} = actualValue;
        
        case 'setFrequency'
            tuneResult = TuneResultCapiT();
            coder.cstructname(tuneResult, 'TuneResultCapiT', 'extern');
            coder.ceval(cmd_c, varargin{:}, ...
                        coder.wref(tuneResult), coder.wref(errStat_i), coder.ref(errStr));
            varargout{1} = tuneResult;
            
        case 'getFrequencyRange'
            freqRange = FreqRangeCapiT();
            coder.cstructname(freqRange, 'FreqRangeCapiT', 'extern');
            coder.ceval(cmd_c, varargin{:}, ...
                        coder.wref(freqRange), coder.wref(errStat_i), coder.ref(errStr));
            varargout{1} = freqRange;

        case 'getGainRange'
            gainRange = GainRangeCapiT();
            coder.cstructname(gainRange, 'GainRangeCapiT', 'extern');
            coder.ceval(cmd_c, varargin{:}, ...
                        coder.wref(gainRange), coder.wref(errStat_i), coder.ref(errStr));
            varargout{1} = gainRange;           
            
        case 'receiveData'
            % 46336 represents 0.00185344 seconds at 25Msps.  1 ms seems to be a decent
            % time interval to interact with the IP stack on a default glnxa64 machine.
            % 32768 seems to be the max for UHD(TM) so we may want to change to that.
            assert(varargin{6}<=MAX_FRAMELENGTH);
            frameLength = uint32(varargin{6});
            data        = complex(zeros(MAX_FRAMELENGTH, 1, 'int16'));
            dataLength  = uint32(0);
            overflow    = uint32(0);
            coder.ceval(cmd_c, ...
                varargin{1}, varargin{2}, varargin{3}, varargin{4}, varargin{5}, ...
                coder.wref(data), coder.wref(dataLength), coder.wref(overflow), ...
                coder.wref(errStat_i), coder.ref(errStr));
            varargout{1} = data;
            varargout{2} = dataLength;
            varargout{3} = overflow;

        case {'sendInt16Data',  'sendComplexInt16Data', ...
              'sendSingleData', 'sendComplexSingleData', ...
              'sendDoubleData', 'sendComplexDoubleData'}
            
            assert(varargin{7}<=MAX_FRAMELENGTH);
            frameLength = uint32(varargin{7});
            underflow   = uint32(0);
            coder.ceval('sendData_c', ...
                varargin{1}, varargin{2}, varargin{3}, varargin{4}, varargin{5}, varargin{6}, ...
                coder.wref(underflow), coder.wref(errStat_i), coder.ref(errStr));
            varargout{1} = underflow;
            
        case {'sendInt16Data_x'}
            assert(varargin{7}<=MAX_FRAMELENGTH);
            frameLength = uint32(varargin{7});
            dPortDType  = DataPortDataTypeCapiEnumT.DPortDTypeInt16;
            underflow   = uint32(0);
            coder.ceval('sendData_c', ...
                varargin{1}, varargin{2}, varargin{3}, varargin{4}, varargin{5}, varargin{6}, ...
                coder.wref(underflow), coder.wref(errStat_i), coder.ref(errStr));
            varargout{1} = underflow;
    end
    %errStat = UsrpErrorCapiEnumT(errStat_i);
    errStat     = errStat_i;
    errStrSize  = coder.ceval('strlen', coder.rref(errStr));
    assert(errStrSize <= MAX_ERROR_MESSAGE_LENGTH);
    errStr      = errStr(1:errStrSize);
end

switch (cmd)
    case {'deleteDriver', 'setClockConfig', 'setClockConfigFull', 'closeDataConnection', 'checkSDRHostName'}
        varargout{1} = errStat;
        varargout{2} = errStr;
        
    case {'getSDRuList', 'reportDrivers', 'createDriver', 'getDeviceDescription', ...
          'setRate', 'setFrequency', 'setGain', 'getRate', 'getFrequency', 'getGain', ...
          'getFrequencyRange', 'getGainRange', 'openDataConnection', ...
          'sendInt16Data',  'sendComplexInt16Data', ...
          'sendSingleData', 'sendComplexSingleData', ...
          'sendDoubleData', 'sendComplexDoubleData', ...
          'sendInt16Data_x', 'getSDRuDriverVersion'}
        varargout{2} = errStat;
        varargout{3} = errStr;
        
    case 'receiveData'
        varargout{4} = errStat;
        varargout{5} = errStr;
        
end
end
