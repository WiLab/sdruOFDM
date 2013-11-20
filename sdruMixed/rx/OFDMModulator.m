classdef OFDMModulator < OFDMBase
%OFDMModulator Apply OFDM modulation to the input signal.
%   H = OFDMModulator returns a System object, H, that can be used 
%   to do OFDM modulation on an input signal.
%
%   H = OFDMModulator('Name', Value, ...) returns an OFDM Modulator
%   System object, H, with each specified property name set to the
%   specified value. You can specify name-value pair arguments in any order
%   as (Name 1, Value 1, Name 2, Value 2, ....).
%
%   Step method syntax:
%
%   Y = step(H, X) computes the OFDM modulation, Y, of X. The input X is in 
%   the format of dimension FxTxNt, where
%   F represents the number of subcarriers mapped to the input signal
%   T represents the number of OFDM symbols to be generated
%   Nt represents the number of transmit antennas to be used
%
%   Y = step(H, X, pilot) insert pilot to X and computes the OFDM modulation 
%   of it. The input X is in the format MxNxP
%   The second inpt, pilot, is in the the format of MpxNxP, where
%   Mp is the number of pilots in each symbol.
%
%   Y = step(H, X, preamble, pilot) add peamble symbol(s), insert pilot 
%   to X and computes the OFDM modulation of it. 
%   The input X is in the format MxNxP 
%   The preamble input is in the format of MprxNprxP, where
%   Mpr is the number of frequency carriers used by the preamble symbol(s)
%   Npr is the number of preamble symbol(s)
%   The pilot input is in the the format of MpxNxP, where
%   Mp is the number of pilot in each symbol
%
%   Y is OFDM symbol(s) in the format of dimension LxP, where 
%   L is the length of concatenating all OFDM symbols for one antenna 
%   (including preamble symbol(s), if applicable) into one column. 
%   P is the number of antennas to be used 
%
%   OFDMModulator methods:
%
%   ShowResourceMapping  - Display the mapping of subcarriers to data, 
%                          preamble, pilots, nulls, and guardbands
%   generate3DIndices    - Generate 3-D indices from 2-D matrix
%   generate3DIndices method syntax:
%   y = generate3DIndices(H, m1, m2, ..., mP) 
%   Assume there are P transmit antennas. The input arguments to it
%   should be H plus m1, m2, ...., mP.
%   The output,y, is in a 3-D format
%
%   OFDMModulator properties:
%
%   FFTLength                  - IFFT length
%   GuardBands                 - Guard bands
%   CyclicPrefixLength         - Cyclic prefix length
%   InsertNullsType            - Option to insert different kinds of nulls
%   NullCarrierIndices         - Location of subcarriers mapped to Nulls
%   PilotInputPorts               - Option to insert pilots
%   PilotCarrierIndices        - Location of subcarriers mapped to Pilots
%   EnablePreamble             - Option to enable preamble input
%   PreambleGuardBands         - Preamble guard bands
%   PreambleCyclicPrefixLength - Preamble cyclic prefix length
%   InsertPreambleDCNull       - Option to insert DC Null in preamble
%   NumOutputSymbols           - Number of output OFDM symbols
%   NumPreambleSymbols         - Number of preamble symbols
%   NumTransmitAntennas        - Number of transmit antennas
%
%  %Example 1: Use OFDMModulator to form one OFDM symbol for one antenna
%     %with following specification:
%     %   -FFTLength is 64
%     %   -add 6 guards on the left and 5 guards on the right
%     %   -Cyclic Prefix length is 16
%     %   -Insert DC null
%     %   -No pilot insertion
%     %   -No preamble input
%     h = OFDMModulator;
%     h.ShowResourceMapping;
%     y = step(h, (1:52).');
%
%  %Example 2: Insert constant type pilot
%  % Plots are inserted to the same locations for all three OFDM symbols.
%     h = OFDMModulator('PilotInputPorts', true,...
%                            'PilotCarrierIndices', [-21;-7;7;21],...
%                            'NumOutputSymbols', 3);
%     h.ShowResourceMapping;
%     x = [(1:48).' (1:48).' (1:48).'];
%     pilot = [(1:4).' (1:4).' (1:4).'];
%     y = step(h, x, pilot);
%
%  %Example 3: Insert variable type pilot
%  % Pilots are inserted to different locations for each symbol
%     h = OFDMModulator(...
%         'PilotInputPorts', true,...
%         'PilotCarrierIndices', [[-21;  -7;  7;  21]...
%                                 [-24;  -10; 10; 24]...
%                                 [-18;  -4;  4;  18]],...
%         'NumOutputSymbols', 3);
%     h.ShowResourceMapping;
%     x     = [(1:48).' (1:48).' (1:48).'];
%     pilot = [(1:4).' (1:4).' (1:4).'];
%     y = step(h, x, pilot);
%
%   %Example 4: Insert variable type pilot and enable preamble input
%     h = OFDMModulator(...
%         'FFTLength', 128,...
%         'PilotInputPorts', true,...
%         'PilotCarrierIndices', [[-27;-7;7;27]...
%                                 [-25;-10;10;25]...
%                                 [-20;-5;5;20]],...
%         'NumOutputSymbols', 4,...
%         'EnablePreamble', true,...
%         'NumPreambleSymbols',1,...
%         'PreambleGuardBands', [4;3],...
%         'PreambleCyclicPrefixLength', 16,...
%         'InsertPreambleDCNull', true);
%     h.ShowResourceMapping;
%     x        = [(1:(48+64)).' (1:(48+64)).' (1:(48+64)).'];
%     pilot    = [(1:4).' (1:4).' (1:4).'];
%     preamble = (1:(56+64)).';
%     y = step(h, x, preamble, pilot);
%    
%
%   %Example 5: Specify different Cyclic Prefix length for each symbol
%     h = OFDMModulator('PilotInputPorts', true,...
%                            'PilotCarrierIndices', [-21;-7;7;21],...
%                            'NumOutputSymbols', 3,...
%                            'CyclicPrefixLength', [16 13 16].');
%     h.ShowResourceMapping;
%     x = [(1:48).' (1:48).' (1:48).'];
%     pilot = [(1:4).' (1:4).' (1:4).'];
%     y = step(h, x, pilot);

%   Copyright 2013 The MathWorks, Inc.

%#codegen
%#ok<*EMCA>
%#ok<*EMGRO>

properties (Nontunable)
    %Window length 
    WindowLength = 1;
    %NumTransmitAntennas Number of transmit antennas
    % Specify the number of tranmit antennas to be used. This property
    % can be set to a positive integer scaler. The default value of this property is 1.
    NumTransmitAntennas = 1; % can be dependent
end

properties (Nontunable, Logical)
    %InsertDCNull Insert DC null
    % Specify the nulls type to be inserted: 'None', 'DC-only',
    % 'Custom'. The default setting of this property is 'DC-only'
    InsertDCNull = false;
    %Windowing Apply rasied cosine windowing between OFDM symbols
    Windowing = false;
    %PilotInputPort Pilot input port
    % Setting this property to true, the System object will expect a
    % separate pilot input. The default value of this property is false.
    PilotInputPort = false;
end

properties (Access = protected)
    pFullGrid;
end

properties (Logical, Access = private, Nontunable)   
    pHasCustomNull;
end

methods
  function object = OFDMModulator(varargin)
    if nargin == 1 && isa(varargin{1}, 'OFDMDemodulator')
        demodObj = varargin{1};        
        object.FFTLength            = demodObj.FFTLength;
        object.NumGuardBandCarriers = demodObj.NumGuardBandCarriers;     
        object.CyclicPrefixLength   = demodObj.CyclicPrefixLength;
        object.InsertDCNull         = demodObj.RemoveDCCarrier;
        object.NumSymbols           = demodObj.NumSymbols;
        object.PilotInputPort       = demodObj.PilotOutputPort;
        if demodObj.PilotOutputPort
            object.PilotCarrierIndices = demodObj.PilotCarrierIndices;
            object.NumTransmitAntennas = size(demodObj.PilotCarrierIndices, 3);            
        end
    else
        setProperties(object, nargin, varargin{:});
    end
  end

  function set.WindowLength(obj, winLen)
    propName = 'WindowLength';
    validateattributes(winLen, {'numeric'}, ...
        {'real','scalar','integer','positive','finite'}, ...
        [class(obj) '.' propName], propName);  
      
    obj.WindowLength = winLen;
  end
  
  function set.NumTransmitAntennas(obj, Nt)
    propName = 'NumTransmitAntennas';
    validateattributes(Nt, {'numeric'}, ... 
        {'real','scalar','integer','>=',1,'<=',64}, ... 
        [class(obj) '.' propName], propName); 
    
    obj.NumTransmitAntennas = Nt;
  end
  
  function showResourceMapping(obj, varargin)
    narginchk(1, 2)

    FFTLen = obj.FFTLength;    
    numSym = obj.NumSymbols;
    numTx  = obj.NumTransmitAntennas;
    
    if ~isLocked(obj) 
        dataInput = ones(getNumDataCarriers(obj, obj.InsertDCNull, obj.PilotInputPort), numSym, numTx);
        if ~obj.PilotInputPort
            setup(obj, dataInput);
        else
            pilotInput = ones(size(obj.PilotCarrierIndices,1), numSym, numTx);
            setup(obj, dataInput, pilotInput);
        end
        release(obj);
    end
    
    dataColor      = [0   0   0.5];  % dark blue
    guardBandColor = [0.5 0   0  ];  % red
    pilotColor     = [0   1   0  ];  % green
    nullColor      = [0.5 0.5 0.5];  % grey

    if ~obj.pHasCustomNull
        fullGrid = obj.pFullGrid(:,:,1);
        colorFullGrid = zeros(FFTLen, numSym, 3);
    else
        fullGrid = obj.pFullGrid;
        colorFullGrid = zeros(FFTLen, numSym, 3, numTx);
    end
    
    % Separate guard bands and nulls with different values
    fullGrid([1:obj.NumGuardBandCarriers(1), FFTLen-obj.NumGuardBandCarriers(2)+1:FFTLen],:,:) = 3;

    % Lable Y-axis tick
    myYTickLabel = {'Data'};
    myColorMap = [0 0 0.5];

    if any(obj.NumGuardBandCarriers > 0) 
        myYTickLabel(end+1) = {'Guard Band'};
        myColorMap(end+1, :) = guardBandColor;
    end
    
    if obj.InsertDCNull || obj.pHasCustomNull
        myYTickLabel(end+1) = {'Null'};
        myColorMap(end+1, :) = nullColor;
    end

    if obj.PilotInputPort
        myYTickLabel(end+1) = {'Pilot'};
        myColorMap(end+1, :) = pilotColor;
    end
           
    numPlot = size(colorFullGrid, 4);    
    if nargin == 2
        freqRange = varargin{1};
        validateattributes(freqRange, {'numeric'}, {'integer','finite','size',[1 2]}, ...
            [class(obj) '.' 'Subcarrier index input'], 'Subcarrier index input');
        coder.internal.errorIf(diff(freqRange) ~= (FFTLen -1), 'OFDM.xxx');
    else
        freqRange = [1 FFTLen];
    end
    
    for txIdx = 1:numPlot
        if ndims(colorFullGrid) < 4
            titleText = 'OFDM Resource Mapping for All Tx Antennas';
        else
            titleText = sprintf('OFDM Resource Mapping for Tx Antenna %d', txIdx);
        end
        figure('NumberTitle','off','Name',titleText);
        % subplot(numPlot, 1, txIdx);
        for symIdx = 1:numSym
            for carrierIdx = 1:FFTLen
                switch fullGrid(carrierIdx, symIdx, txIdx)
                case 0 % null
                    colorFullGrid(carrierIdx,symIdx,:,txIdx) = nullColor;
                case 1 % data
                    colorFullGrid(carrierIdx,symIdx,:,txIdx) = dataColor;
                case 2 % pilot
                    colorFullGrid(carrierIdx,symIdx,:,txIdx) = pilotColor;
                case 3 % guard bands
                    colorFullGrid(carrierIdx,symIdx,:,txIdx) = guardBandColor;
                end                                
            end            
        end
                
        image([1 numSym], freqRange, colorFullGrid(:,:,:,txIdx));
        colormap(myColorMap);
        colorbar('YTick', 1:length(myYTickLabel), 'YTickLabel',  myYTickLabel);
        set(gca, 'TickDIR', 'out', ...
                 'XTick',   1:numSym, ...
                 'YTick',   [freqRange(1):FFTLen/8:freqRange(2)-1, freqRange(2)]);
        
        xlabel('OFDM Symbols');
        ylabel('Subcarrier Indices');
        title(titleText);
    end        
  end  
end

methods(Access = protected)  
  function validatePropertiesImpl(obj)          
    if obj.Windowing
        coder.internal.errorIf(obj.WindowLength > min(obj.CyclicPrefixLength), ...
             'comm:OFDM:xxx');
    end
    
    if obj.PilotInputPort
       % Check the 3rd dimension of PilotCarrierIndices
       coder.internal.errorIf((size(obj.PilotCarrierIndices, 3) ~= 1) && ...
           (size(obj.PilotCarrierIndices, 3) ~= obj.NumTransmitAntennas), ...
           'OFDM:xxxx');
    end
    
    dependentPropertyValidation(obj, obj.PilotInputPort, obj.InsertDCNull);
  end
  
  function validateInputsImpl(obj, x, varargin)
    numSym = obj.NumSymbols;
    numTx  = obj.NumTransmitAntennas;
    
    % Validate data input
    validateattributes(x, {'numeric'}, {'3d','finite','size', ...
        [getNumDataCarriers(obj, obj.InsertDCNull, obj.PilotInputPort) numSym numTx]}, ...
        [class(obj) '.' 'Data input'], 'Data input');

    % Validate pilot input
    if obj.PilotInputPort
        validateattributes(varargin{1}, {'numeric'}, {'3d','finite','size', ...
            [size(obj.PilotCarrierIndices, 1)  numSym numTx]}, ...
            [class(obj) '.' 'Pilot input'], 'Pilot input');        
    end
  end  
  
  function setupImpl(obj, varargin)
    FFTLen = obj.FFTLength;
    numSym = obj.NumSymbols;    
    numTx  = obj.NumTransmitAntennas;
    
    % obj.pHasPilot = obj.PilotInputPort;
    % obj.pHasDCNull = obj.InsertDCNull;    
    obj.pHasCustomNull = obj.PilotInputPort && ~ismatrix(obj.PilotCarrierIndices);
    
    if obj.PilotInputPort
        % Calculate pilot 3D indices at Tx
        pilotIdx = obj.PilotCarrierIndices;
        numPilotTxPerSym = size(pilotIdx, 1);
        pilotTx3DIndices = repmat(pilotIdx, ...
             [1 numSym/size(pilotIdx,2) numTx/size(pilotIdx,3)]);
        
        % Calculate pilot linear indices at Tx
        obj.pPilotLinearIndices = convert3DIndexToLinearIndex(obj, pilotTx3DIndices);

        if obj.pHasCustomNull 
            % Calculate custom null 3D indices at Tx
            customNullTx3DIndices = coder.nullcopy(zeros(...
                numPilotTxPerSym*(numTx-1), numSym, numTx));    
            for txIdx = 1 : numTx
                customNullTx3DIndices(:,:,txIdx) = reshape(permute(...
                    pilotTx3DIndices(:,:,[(1:txIdx-1),(txIdx+1:numTx)]), [1 3 2]), ...
                    numPilotTxPerSym*(numTx-1), numSym);
            end

            % Calculate custom null linear indices at Tx
            customNullTxLinearIndices = convert3DIndexToLinearIndex(obj, customNullTx3DIndices);
        end
    end

    % Pre-fill data grid for modulator computation and showResourceMapping 
    % method. Guard band and null = 0; data = 1; pilot = 2
    obj.pFullGrid = ones(FFTLen, numSym, numTx);
    obj.pFullGrid([1:obj.NumGuardBandCarriers(1), ...
        FFTLen-obj.NumGuardBandCarriers(2)+1:FFTLen], :,:) = 0; % Guard bands
    if obj.InsertDCNull
        obj.pFullGrid(FFTLen/2+1, :,:) = 0; % DC null
    end
    if obj.pHasCustomNull
        obj.pFullGrid(customNullTxLinearIndices) = 0; % Custom null
    end
    if obj.PilotInputPort
        obj.pFullGrid(obj.pPilotLinearIndices) = 2; % Pilot
    end
    
    % Calculate data linear indices at Tx
    obj.pDataLinearIndices = find(obj.pFullGrid == 1);  % Linear indices
  end

  function yout = stepImpl(obj, dataIn, varargin)
    FFTLen = obj.FFTLength;
    CPLen  = obj.CyclicPrefixLength;
    numSym = obj.NumSymbols;
    numTx  = obj.NumTransmitAntennas;
    
    % Pack data and pilots to full grid
    packedData = obj.pFullGrid;
    packedData(obj.pDataLinearIndices) = double(dataIn(:));
    
    if obj.PilotInputPort
        pilotIn = double(varargin{1});
        packedData(obj.pPilotLinearIndices) = pilotIn(:);
    end
    
    % IFFT shift    
    if isreal(packedData)
        postShift = complex(ifftshift(packedData, 1), 0);
    else
        postShift = ifftshift(packedData, 1);
    end
    
    % IFFT: frequency domain to time domain
    postIFFT = ifft(postShift, [], 1);
    
    % Cyclic prefix
    if isscalar(CPLen)        
        postCP = cat(1, postIFFT(end-CPLen+(1:CPLen), :, :), postIFFT);
        yout = reshape(postCP, [(FFTLen + CPLen)*numSym, numTx]);
    else
        yout = coder.nullcopy(complex(zeros(FFTLen*numSym + sum(CPLen), numTx)));
        for symIdx = 1:numSym
            yout(FFTLen*(symIdx-1)+sum(CPLen(1:symIdx-1)) + (1:FFTLen+CPLen(symIdx)), :) = ...
                [squeeze(postIFFT(end-CPLen(symIdx)+(1:CPLen(symIdx)), symIdx, :)); squeeze(postIFFT(:, symIdx, :))];
        end
    end    
  end
  
  function flag = isInactivePropertyImpl(obj, prop)
    switch prop                    
    case 'WindowLength'
        flag = ~(obj.Windowing);
    case 'PilotCarrierIndices'
        flag = ~(obj.PilotInputPort);
    otherwise
        flag = false;
    end
  end

  function s = saveObjectImpl(obj)
    s = saveObjectImpl@OFDMBase(obj);
    if isLocked(obj)
        s.pFullGrid      = obj.pFullGrid;
        s.pHasCustomNull = obj.pHasCustomNull; 
    end
  end
  
  function loadObjectImpl(obj, s, wasLocked)
    if (wasLocked)
        obj.pFullGrid      = s.pFullGrid;
        obj.pHasCustomNull = s.pHasCustomNull; 
    end
    loadObjectImpl@OFDMBase(obj, s, wasLocked);
  end
  
  function s = infoImpl(obj)          
    if ~isLocked(obj)        
        validateProperties(obj);
    end
    
    numSym = obj.NumSymbols;
    numTx  = obj.NumTransmitAntennas;
    
    if numTx == 1
        s.DataInputSize = [getNumDataCarriers(obj, obj.InsertDCNull, obj.PilotInputPort) numSym];
    else
        s.DataInputSize = [getNumDataCarriers(obj, obj.InsertDCNull, obj.PilotInputPort) numSym numTx];
    end
    
    if obj.PilotInputPort
        if numTx == 1
            s.PilotInputSize = [size(obj.PilotCarrierIndices, 1) numSym];
        else
            s.PilotInputSize = [size(obj.PilotCarrierIndices, 1) numSym numTx];
        end
    end
    
    s.OutputSize = [getTimeDomainFrameLength(obj) numTx];
  end
  
  function num = getNumInputsImpl(obj)
    num = 1 + obj.PilotInputPort;
  end
  
  function flag = isInputSizeLockedImpl(~,~)
    flag = true;
  end
  
  function flag = isInputComplexityLockedImpl(~,~)
    flag = false;
  end
  
  function flag = isOutputComplexityLockedImpl(~,~)
    flag = true;
  end
  
  function varargout = isOutputFixedSizeImpl(~)
    varargout = {true};
  end
  
  function varargout = isOutputComplexImpl(~)
    varargout = {true};
  end

  function varargout = getOutputDataTypeImpl(~)
    varargout = {'double'};
  end

  function outSize = getOutputSizeImpl(obj)    
    % xxx may need input (maximum) size checking here 
    outSize = [getTimeDomainFrameLength(obj), obj.NumTransmitAntennas];
  end
  
  function varargout = getInputNamesImpl(obj)      
    varargout = cell(1, getNumInputs(obj));
    varargout{1} = '';
    if obj.PilotInputPort
        varargout{2} = 'Pilot';
    end    
  end
  
  function varargout = getOutputNamesImpl(~)      
    varargout = {''};
  end
  
  function icon = getIconImpl(~)
    icon = sprintf('OFDM\nModulator');
  end  
end

methods(Static, Access = protected)
  function header = getHeaderImpl    
    header = matlab.system.display.Header('OFDMModulator',...
        'Title', 'OFDM Modulator');
  end
    
  function groups = getPropertyGroupsImpl
    params = matlab.system.display.Section(...
        'Title', 'Parameters',...
        'PropertyList', {'FFTLength','CyclicPrefixLength','NumGuardBandCarriers',...
                         'InsertDCNull','Windowing','WindowLength', ...
                         'NumSymbols','NumTransmitAntennas', ...
                         'PilotInputPort','PilotCarrierIndices'});
    groups = params;
  end
end

end

% [EOF]