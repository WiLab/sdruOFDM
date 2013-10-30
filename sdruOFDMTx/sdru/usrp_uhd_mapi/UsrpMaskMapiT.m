%   Warning: This undocumented function may be removed in a future release.

%   Copyright 2011-2012 The MathWorks, Inc.



classdef UsrpMaskMapiT < handle
    properties
        apiH        = int32(0);
        ipAddr      = '';
        boardId     = BoardIdCapiEnumT(0);
        instanceId  = '';
    end
    
    methods (Static)
        function [a,s,e] = findUsrps()
            [a,s,e] = getSDRuList();
        end
        function [a,s,e] = reportDrivers()
            [a,s,e] = reportDrivers();
        end
    end
    
    methods
        function obj = UsrpMaskMapiT(addr, boardId, varargin)
            if (nargin == 2)
                obj.instanceId = tempname('.');
            else
                obj.instanceId = varargin{1};
            end
            obj.ipAddr     = addr;
            obj.boardId    = boardId;
            [obj.apiH, s, e] = createDriver(uint8(obj.ipAddr), boardId, uint8(obj.instanceId));
            l_checkErr(s, e);
        end
        function delete(obj)
                obj.deleteDriver();
        end
        function deleteDriver(obj)
            if (obj.apiH)
              [s, e] = deleteDriver(obj.apiH);
              l_checkErr(s, e);
              obj.apiH = int32(0);
            end
        end
        function d = getDeviceDescription(obj)
            [d, s, e] = getDeviceDescription(obj.apiH);
            l_checkErr(s, e);
        end
        function setClockConfig(obj, clkConfig)
            [s, e] = setClockConfig(obj.apiH, clkConfig);
            l_checkErr(s, e);
        end
        function setClockConfigFull(obj, clkConfig)
            [s, e] = setClockConfigFull(obj.apiH, clkConfig);
            l_checkErr(s, e);
        end
        function aval = setRate(obj, dval)
            [aval, s, e] = setRate(obj.apiH, dval);
            l_checkErr(s, e);
        end
        function tuneResult = setFrequency(obj, dFrequency, dLoOffset)
            [tuneResult, s, e] = setFrequency(obj.apiH, dFrequency, dLoOffset);
            l_checkErr(s, e);
        end
        function aval = setGain(obj, dval)
            [aval, s, e] = setGain(obj.apiH, dval);
            l_checkErr(s, e);
        end
        function aval = getRate(obj)
            [aval, s, e] = getRate(obj.apiH);
            l_checkErr(s, e);
        end
        function aval = getFrequency(obj)
            [aval, s, e] = getFrequency(obj.apiH);
            l_checkErr(s, e);
        end
        function aval = getGain(obj)
            [aval, s, e] = getGain(obj.apiH);
            l_checkErr(s, e);
        end
        function freqRange = getFrequencyRange(obj)
            [freqRange, s, e] = getFrequencyRange(obj.apiH);
            l_checkErr(s, e);
        end
        function gainRange = getGainRange(obj)
            [gainRange, s, e] = getGainRange(obj.apiH);
            l_checkErr(s, e);
        end
        % ------------------------------------------------------
        function openDataConnection(obj)
            [obj.apiH, s, e] = openDataConnection(uint8(obj.ipAddr), obj.boardId, uint8(obj.instanceId));
            l_checkErr(s, e);
        end
        function closeDataConnection(obj)
            [s, e] = closeDataConnection(obj.apiH);
            l_checkErr(s, e);
            obj.apiH = int32(0);
        end
        function [data, dataLength, overflow] = ...
                receiveData(obj, freq, loOffset, gain, decim, frameLength, outputDatatype)
            [data, dataLength, overflow, s, e] = ...
                receiveData(obj.apiH, freq, loOffset, gain, decim, frameLength, outputDatatype);
            l_checkErr(s, e);
        end
        function underflow = ...
                sendData(obj, txd, freq, loOffset, gain, interp, frameLength, outputDatatype)
            switch (outputDatatype)
              case DataPortDataTypeCapiEnumT.DPortDTypeInt16,   sendFunc = @sendInt16Data;
              case DataPortDataTypeCapiEnumT.DPortDTypeCInt16,  sendFunc = @sendComplexInt16Data;
              case DataPortDataTypeCapiEnumT.DPortDTypeSingle,  sendFunc = @sendSingleData;
              case DataPortDataTypeCapiEnumT.DPortDTypeCSingle, sendFunc = @sendComplexSingleData;
              case DataPortDataTypeCapiEnumT.DPortDTypeDouble,  sendFunc = @sendDoubleData;
              case DataPortDataTypeCapiEnumT.DPortDTypeCDouble, sendFunc = @sendComplexDoubleData;
              otherwise
                error(message('sdru:UsrpMaskMapiT:badDType'))
            end
            [underflow, s, e] = ...
                feval(sendFunc, obj.apiH, txd, freq, loOffset, gain, interp, frameLength, outputDatatype);
            l_checkErr(s, e);
        end
        
    end
    
    % METHODS FOR THE BLOCK MASK
    methods (Static=true)
        function [iplist, noneFound] = findUsrpsList()
            [a, s, ~] = getSDRuList();
            if (s == UsrpErrorCapiEnumT.UsrpDriverSuccess)
                addrs  = a(find(a)); %#ok<*FNDSB> % chomp NULLs at end
                iplist = regexp(addrs, ',', 'split'); % cell array
                if (strcmp(addrs,'No devices found'))
                    noneFound = true;
                else
                    noneFound = false;
                end
            else
                iplist = {'No devices found'};
                noneFound = true;
            end
        end
        function list = reportDriversList()
            [a, s, ~] = reportDrivers();
            if (s == UsrpErrorCapiEnumT.UsrpDriverSuccess)
                addrs = a(find(a)); %#ok<*FNDSB> % chomp NULLs at end
                list  = regexp(addrs, ',', 'split'); % cell array
            else
                list = {''};
            end
        end
    end
    
    methods 
        function mbInfo = getMBoardInfo(obj)        
            descr     = obj.getDeviceDescription();
            rawinfo   = descr(find(descr)); %#ok<FNDSB> % chomp NULLs
            % FIXME: here, I search strings for subset of info.  Really need a
            % better get_device_description function.
            splitinfo = regexp(rawinfo, '\n', 'split');
            subinfo   = regexp(splitinfo,'Mboard.*:.*|[TR]X Subdev:.*','match');
            cellinfo  = [ subinfo{~cellfun('isempty', subinfo)} ];
            mbInfo    = sprintf('%s\n', cellinfo{:});
        end
            
        function dbInfo = getDBoardInfo(obj)
            rawinfo.fRange = obj.getFrequencyRange();
            rawinfo.gRange = obj.getGainRange();
            
            if (isempty(rawinfo.fRange) || isempty(rawinfo.gRange))
                strInfo = 'No USRP daughterboard found.';
            else
                fmtStr = ['%25s: %0.5g %s\n', ...
                    '%25s: %0.5g %s\n', ...
                    '%25s: %0.5g dB\n', ...
                    '%25s: %0.5g dB\n', ...
                    '%25s: %0.5g dB\n'];
                [fminVal,~,fminUnit] = engunits(rawinfo.fRange.min);
                [fmaxVal,~,fmaxUnit] = engunits(rawinfo.fRange.max);
                strInfo = sprintf(fmtStr, ...
                    'Minimum center frequency', fminVal,[fminUnit 'Hz'], ...
                    'Maximum center frequency', fmaxVal,[fmaxUnit 'Hz'], ...
                    'Minimum gain',             rawinfo.gRange.min, ...
                    'Maximum gain',             rawinfo.gRange.max, ...
                    'Gain step size',           rawinfo.gRange.step);

            end
            dbInfo = strInfo;
        end
        
        function [mboardName, rxDboardName, txDboardName] = getBoardNames(obj)            
            descr = obj.getDeviceDescription();
            
            descr2       = regexp(descr, 'Mboard.*: (.*)', 'tokens', 'dotexceptnewline');
            descr3       = descr2{1};
            mboardName   = descr3{1};
            
            descr2       = regexp(descr, 'RX Subdev: (.*)', 'tokens', 'dotexceptnewline');
            descr3       = descr2{1};
            rxDboardName = descr3{1};
            
            descr2       = regexp(descr, 'TX Subdev: (.*)', 'tokens', 'dotexceptnewline');
            descr3       = descr2{1};
            txDboardName = descr3{1};            
        end
    end
    
end

function l_checkErr(s, e)
if (s ~= UsrpErrorCapiEnumT.UsrpDriverSuccess)
    error(message('sdru:UsrpMaskMapiT:sendDataUnsuccessful',e));
end
end
