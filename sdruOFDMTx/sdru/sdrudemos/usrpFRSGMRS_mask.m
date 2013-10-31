function params = usrpFRSGMRS_mask(block, action, mode, varargin)
% Validate parameter values, and create parameter structures for the
% FRS/GMRS transmit and receive examples. Also set parameter values on
% blocks immediately via set_params.

%  Copyright 2011-2012 The MathWorks, Inc.
%  $Revision: 1.1.6.1 $  $Date: 2012/08/21 01:21:15 $

switch action
    case 'cbSignalSelection'
        selectionPopup = get_param(block,'selection');
        if (strcmp(selectionPopup,'Pure tone'))
            set_param(block, 'maskvisibilities', {'on', 'on', 'off', 'on', 'on', 'on'});
            set_param(block, 'maskenables',      {'on', 'on', 'off', 'on', 'on', 'on'});
        elseif (strcmp(selectionPopup,'Chirp'))
            set_param(block, 'maskvisibilities', {'on', 'off', 'on', 'on', 'on', 'on'});
            set_param(block, 'maskenables',      {'on', 'off', 'on', 'on', 'on', 'on'});
        elseif (strcmp(selectionPopup, 'Sound file'))
            set_param(block, 'maskvisibilities', {'on', 'off', 'off', 'on', 'on', 'on'});
            set_param(block, 'maskenables',      {'on', 'off', 'off', 'on', 'on', 'on'});
        end
        
    case 'init'
        if (strcmp(mode, 'trans'))
            [selectionPopup, toneFreq, tsTime, channel, code, amplitude] = deal(varargin{:});
            
            if (strcmp(selectionPopup,'Pure tone'))
                set_param([bdroot '/Sources/Selection'], 'Value', '1');
                
                % Check and set the tone frequency
                validateattributes(toneFreq,{'numeric'},{'real','nonempty','scalar','>=',500,'<=',4000});
                set_param([bdroot '/Sources/Sine Wave'], 'Frequency', num2str(toneFreq));
                
            elseif (strcmp(selectionPopup,'Chirp'))
                set_param([bdroot '/Sources/Selection'], 'Value', '2');
                
                % Check and set the chirp sweep time
                validateattributes(tsTime,{'numeric'},{'real','nonempty','nonnegative','scalar','nonnan','finite'});
                
                if (str2double(get_param([bdroot '/Sources/Chirp'], 'Tsweep')) < tsTime)
                    set_param([bdroot '/Sources/Chirp'], 'Tsweep', num2str(tsTime));
                    set_param([bdroot '/Sources/Chirp'], 't1', num2str(tsTime));
                else
                    set_param([bdroot '/Sources/Chirp'], 't1', num2str(tsTime));
                    set_param([bdroot '/Sources/Chirp'], 'Tsweep', num2str(tsTime));
                end
                
            else
                set_param([bdroot '/Sources/Selection'], 'Value', '3');
                
            end
            
            % Check and set the FRS/GMRS channel value
            validateattributes(channel,{'numeric'},{'real','nonempty','scalar','integer','>=',1,'<=',14});
            set_param([bdroot '/Channel to Frequency/Channel'], 'Value', num2str(channel));
            
            % Check and set the CTCSS code
            validateattributes(code,{'numeric'},{'real','nonempty','scalar','integer','>=',1,'<=',38});
            set_param([bdroot '/CTCSS/Code'], 'Value', num2str(code));
            
            % Check and set the CTCSS amplitude
            validateattributes(amplitude,{'numeric'},{'real','nonempty','scalar','nonnegative','nonnan','finite'});
            set_param([bdroot '/CTCSS/Amplitude'], 'Value', num2str(amplitude));
            
            params = getParamsSdruFRSGMRSTxDemo(channel, code, amplitude, toneFreq, tsTime);
            assignin('base', 'FRSTxParams', params);
            
        elseif (strcmp(mode,'rec'))
            
            [channel, code, decodeThresh] = deal(varargin{:});            
            
            % Check and set the FRS/GMRS channel value            
            validateattributes(channel,{'numeric'},{'real','nonempty','scalar','integer','>=',1,'<=',14});
            set_param([bdroot '/Channel to Frequency/Channel'], 'Value', num2str(channel));
            
            % Check and set the CTCSS code            
            validateattributes(code,{'numeric'},{'real','nonempty','scalar','integer','>=',0,'<=',38});
            set_param([bdroot '/FRS-GMRS Receiver/CTCSS Code'], 'Value', num2str(code));
            
            % Check and set the threshold value for nonlinear filtering
            validateattributes(decodeThresh,{'numeric'},{'real','nonempty','scalar','nonnegative','nonnan','finite'});
            set_param([bdroot '/FRS-GMRS Receiver/Average Signal Threshold for Nonlinear Filtering'], 'Value', num2str(decodeThresh));
            
            params = getParamsSdruFRSGMRSRxDemo(channel, code, decodeThresh);
            assignin('base', 'FRSRxParams', params);
            
        end
end

% [EOF]
