function varargout = sdruqpskrx_mask(block, action, varargin)
% sdruqpskrx_mask  Sets up workspace variables for the SDR QPSK Rx example

%   Copyright 2011-2012 The MathWorks, Inc.

%**************************************************************************
% --- Action switch -- Determines which of the callback functions is called
%**************************************************************************
myException = [];
switch(action)
    
    case 'cbShowHideSettingOptions'
        
        settingCtrl = get_param(block, 'SettingCtrl');
        Vis         = get_param(block, 'maskVisibilities');
        En          = get_param(block, 'maskEnables');
        oldEnOptions  = strcat(En{2}, En{4}, En{6});
        
        switch settingCtrl
            
            case 'FFT settings for coarse frequency compensation'
                Vis(4:7) = mat2cell(repmat('off',length(Vis(4:7)),1),ones(size(Vis(4:7))),3);
                En(4:7) = mat2cell(repmat('off',length(En(4:7)),1),ones(size(En(4:7))),3);
                Vis(2:3) = mat2cell(repmat('on',length(Vis(2:3)),1),ones(size(Vis(2:3))),2);
                En(2:3) = mat2cell(repmat('on',length(En(2:3)),1),ones(size(En(2:3))),2);

            case 'Fine frequency compensation settings'
                Vis([2:3 6:7]) = mat2cell(repmat('off',length(Vis([2:3 6:7])),1),ones(size(Vis([2:3 6:7]))),3);
                En([2:3 6:7]) = mat2cell(repmat('off',length(En([2:3 6:7])),1),ones(size(En([2:3 6:7]))),3);
                Vis(4:5) = mat2cell(repmat('on',length(Vis(4:5)),1),ones(size(Vis(4:5))),2);
                En(4:5) = mat2cell(repmat('on',length(En(4:5)),1),ones(size(En(4:5))),2);
                
            case 'Timing recovery settings'                
                Vis(2:5) = mat2cell(repmat('off',length(Vis(2:5)),1),ones(size(Vis(2:5))),3);
                En(2:5) = mat2cell(repmat('off',length(En(2:5)),1),ones(size(En(2:5))),3);
                Vis(6:7) = mat2cell(repmat('on',length(Vis(6:7)),1),ones(size(Vis(6:7))),2);
                En(6:7) = mat2cell(repmat('on',length(En(6:7)),1),ones(size(En(6:7))),2);
                
            otherwise
                % No other actions to take
                
        end
        
        currentEnOptions  = strcat(En{2}, En{4}, En{6});
        
        if (~strcmpi(oldEnOptions, currentEnOptions))
            set_param(block, 'MaskEnables', En, 'MaskVisibilities', Vis);
        end
    
    case 'init'
        myException = updateFFTSize(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        myException = updatenumSpecAverage(block);
        if (~isempty(myException)), varargout{1} = myException; return; end

        myException = updateFineFreqNormalizedBW(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        myException = updateFineFreqDampingFactor(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        myException = updateTimeRecNormalizedBW(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
        myException = updateTimeRecDampingFactor(block);
        if (~isempty(myException)), varargout{1} = myException; return; end
        
    otherwise
        % No other actions to take
        
end

varargout{1} = myException;

%*********************************************************************
% Function Name:    updateFFTSize
% Description:      Set the FFT Size in Coarse Frequency Compensation
%*********************************************************************
function myException = updateFFTSize(block)
% Parameter check
FFTSize = str2double(get_param(block, 'FFTSize'));
if isnan(FFTSize) || ~isreal(FFTSize) || mod(log2(FFTSize),1)~=0 || FFTSize<=0
    error(message('sdru:qpskrxmask:PositiveFFTSize'));
end
% Assign parameter to the block
CoarseFreqCompblock = [bdroot '/QPSK Receiver' ...
        '/Coarse Frequency Compensation/Find Frequency Offset'];
myException = updateTgtParamFromEditSdru(block, CoarseFreqCompblock, 'fftLen', 'FFTSize');

%*********************************************************************
% Function Name:    updatenumSpecAverage
% Description:      Set the Average Spectrum Average in Coarse Frequency Compensation
%*********************************************************************
function myException = updatenumSpecAverage(block)
% Parameter check 
numSpecAverage = str2double(get_param(block, 'numSpecAverage'));
if isnan(numSpecAverage) || ~isreal(numSpecAverage) || mod(numSpecAverage,1)~=0 || numSpecAverage<=0
    error(message('sdru:qpskrxmask:PositiveNumeSpecAverage'));
end
% Assign parameter to the block
CoarseFreqCompblock = [bdroot '/QPSK Receiver' ...
        '/Coarse Frequency Compensation/Find Frequency Offset'];
myException = updateTgtParamFromEditSdru(block, CoarseFreqCompblock, 'fftAvgs', 'numSpecAverage');

%*********************************************************************
% Function Name:    updateFineFreqNormalizedBW
% Description:      Set the normalized bandwidth in the Fine Frequency 
%                   Compensation PLL, normalized to f_{symbol}
%*********************************************************************
function myException = updateFineFreqNormalizedBW(block)
% Parameter check 
FineFreqNormalizedBW = str2double(get_param(block, 'FineFreqNormalizedLoopBW'));
if isnan(FineFreqNormalizedBW) || ~isreal(FineFreqNormalizedBW) || FineFreqNormalizedBW<=0
    error(message('sdru:qpskrxmask:PositiveFineFreqNormalizedBW'));
end
% Assign parameter to the block
FineFreqCompblock = [bdroot '/QPSK Receiver' ...
        '/Fine Frequency Compensation/Loop Filter'];
myException = updateTgtParamFromEditSdru(block, FineFreqCompblock, 'BnTs', 'FineFreqNormalizedLoopBW');

%*********************************************************************
% Function Name:    updateFineDampingFactor
% Description:      Set the damping factor in the Fine Frequency Compensation PLL
%*********************************************************************
function myException = updateFineFreqDampingFactor(block)
% Parameter check 
FineFreqDampFactor = str2double(get_param(block, 'FineFreqDampingFactor'));
if isnan(FineFreqDampFactor) || ~isreal(FineFreqDampFactor) || FineFreqDampFactor<=0
    error(message('sdru:qpskrxmask:PositiveFineFreqDampFactor'));
end
% Assign parameter to the block
FineFreqCompblock = [bdroot '/QPSK Receiver' ...
        '/Fine Frequency Compensation/Loop Filter'];
myException = updateTgtParamFromEditSdru(block, FineFreqCompblock, 'zeta', 'FineFreqDampingFactor');

%*********************************************************************
% Function Name:    updateTimeRecNormalizedBW
% Description:      Set the normalized bandwidth in the Timing Recovery PLL,
%                   normalized to f_{symbol} 
%*********************************************************************
function myException = updateTimeRecNormalizedBW(block)
% Parameter check 
TimeRecNormalizedBW = str2double(get_param(block, 'TimeRecNormalizedLoopBW'));
if isnan(TimeRecNormalizedBW) || ~isreal(TimeRecNormalizedBW) || TimeRecNormalizedBW<=0
    error(message('sdru:qpskrxmask:PositiveTimeRecNormalizedBW'));
end
% Assign parameter to the block
TimeRecLoopFilterblock = [bdroot '/QPSK Receiver' ...
        '/Timing Recovery/Timing Recovery PLL/Loop Filter'];
myException = updateTgtParamFromEditSdru(block, TimeRecLoopFilterblock, 'BnTs', 'TimeRecNormalizedLoopBW');

%*********************************************************************
% Function Name:    updateTimeRecDampingFactor
% Description:      Set the damping factor in the Timing Recovery PLL
%*********************************************************************
function myException = updateTimeRecDampingFactor(block)
% Parameter check 
TimeRecDampFactor = str2double(get_param(block, 'TimeRecDampingFactor'));
if isnan(TimeRecDampFactor) || ~isreal(TimeRecDampFactor) || TimeRecDampFactor<=0
    error(message('sdru:qpskrxmask:PositiveTimeRecDampFactor'));
end
% Assign parameter to the block
TimeRecLoopFilterblock = [bdroot '/QPSK Receiver' ...
        '/Timing Recovery/Timing Recovery PLL/Loop Filter'];
myException = updateTgtParamFromEditSdru(block, TimeRecLoopFilterblock, 'zeta', 'TimeRecDampingFactor');

% [EOF]
