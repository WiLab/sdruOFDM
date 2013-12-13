classdef OFDMDemodulator < OFDMBase
%OFDMDemodulator Apply OFDM demodulation to the input signal.
%   H = OFDMDemodulator returns a System object, H, that can be used to
%   transform OFDM symbol from time domain to frequency domain and separate
%   data from guard bands, pilots, or preambles when applicable.
%
%   H = OFDMModulator('Name', Value, ...) returns an OFDM Demodulator
%   System object, H, with each specified property name set to the 
%   specified value. You can specify name-value pair arguments in any order 
%   as (Name 1, Value 1, Name 2, Value 2, ....).
%
%   H = OFDMDemodulator(hMod) returns an OFDM Demodulator System
%   object, H, based on an OFDM Modulator hMod.
%
%   Step method syntax:
%
%   Y = step(H, X) computes the OFDM demodulation, Y, of input X. Depending
%   on the property settings, there can be one to three outputs:
%   -- Y = step(H, X), Y is the transmitted data symbol
%   -- [Y, Y2] = step(H,X), Y2 is either the preamble or the pilot sequence
%      depending on the properties. Y is the same as above
%   -- [Y, Y2, Y3] = step(H,X), Y2 is the preamble sequence, Y3 is the pilot
%      sequency and Y is the same as above
%
%   OFDMDemodulator methods: 
%
%   ShowResourceMapping  - Display the grid layout with information about the location
%   of data, preamble, pilots, nulls, and guardbands
%      
%   OFDMDemodulator properties:
%
%   FFTLength                  - IFFT length
%   GuardBands                 - Guard bands
%   CyclicPrefixLength         - Cyclic prefix length
%   NullsType                  - Type of nulls inserted
%   NullCarrierIndices         - Null locations on the grid
%   PilotOutputPort             - Option to insert pilots
%   PilotCarrierIndices        - Pilot locations on the grid
%   SeparatePreamble           - Option to enable preamble input
%   NumPreambleSymbols         - Number of preamble symbols
%   PreambleGuardBands         - Preamble guard bands
%   PreambleCyclicPrefixLength - Preamble cyclic prefix length
%   NumInputSymbols            - Number of input OFDM symbols
%   NumReceiveAntennas         - Number of Receive antennas

%   Copyright 2013 The MathWorks, Inc.

%#codegen
%#ok<*EMCA>

properties (Nontunable)
    %NumReceiveAntennas Number of receive antennas
    % Specify the number of tranmit antennas to be used. This property
    % can be set to a positive integer scaler. The default value of this property is 1.
    NumReceiveAntennas = 1;
end

properties (Nontunable, Logical)
    %RemoveDCCarrier Remove DC subcarrier from output
    % Specify the nulls type to be inserted: 'None', 'DC-only',
    % 'Custom'. The default setting of this property is 'DC-only'
    RemoveDCCarrier = false;
    %PilotOutputPort Pilot output port
    % Setting this property to true, the System object will expect a
    % separate pilot input. The default value of this property is false.
    PilotOutputPort = false;
end

methods
  function object = OFDMDemodulator(varargin)
    if nargin == 1 && isa(varargin{1}, 'OFDMModulator')
        modObj = varargin{1};        
        object.FFTLength            = modObj.FFTLength;
        object.NumGuardBandCarriers = modObj.NumGuardBandCarriers;     
        object.CyclicPrefixLength   = modObj.CyclicPrefixLength;
        object.RemoveDCCarrier      = modObj.InsertDCNull;
        object.NumSymbols           = modObj.NumSymbols;
        object.PilotOutputPort      = modObj.PilotInputPort;
        if modObj.PilotInputPort
            object.PilotCarrierIndices = modObj.PilotCarrierIndices;
        end        
    else
        setProperties(object, nargin, varargin{:});
    end
  end

  function set.NumReceiveAntennas(obj, Nr)
    propName = 'NumReceiveAntennas';
    validateattributes(Nr, {'numeric'}, ... 
        {'real','scalar','integer','>=',1,'<=',64}, ... 
        [class(obj) '.' propName], propName); 
    
    obj.NumReceiveAntennas = Nr;
  end 
  
  function showResourceMapping(obj, varargin)
      hMod = OFDMModulator(obj);
      hMod.showResourceMapping(varargin{:});
  end
end

methods(Access = protected)
  function validatePropertiesImpl(obj)          
    dependentPropertyValidation(obj, obj.PilotOutputPort, obj.RemoveDCCarrier);
  end
  
  function validateInputsImpl(obj, x)
%     validateattributes(x, {'double'}, ...
%         {'2d','finite','size', [getTimeDomainFrameLength(obj) obj.NumReceiveAntennas]}, ...
%         [class(obj) '.' 'Input'], 'Input');
  end
  
  function setupImpl(obj, varargin)        
    FFTLen = obj.FFTLength;
    numSym = obj.NumSymbols;
    numRx  = obj.NumReceiveAntennas;
    
    % Fill fill grid for demodulator 
    fullGrid = ones(FFTLen, numSym, numRx);
    fullGrid([1:obj.NumGuardBandCarriers(1), ...
        FFTLen-obj.NumGuardBandCarriers(2)+1:FFTLen], :, :) = 0; % Guard bands = 0
    if obj.RemoveDCCarrier
        fullGrid(FFTLen/2+1, :, :) = 0; % DC null = 0
    end
    if obj.PilotOutputPort % Pilot = 2
        % Calculate pilot 3D indices at Rx
        pilotIdx = obj.PilotCarrierIndices;    
        if ismatrix(pilotIdx)
            pilotRx3DIndices = repmat(pilotIdx, [1 numSym/size(pilotIdx,2) numRx]);
        else
            pilotRx3DIndices = repmat(reshape(permute(pilotIdx, [1 3 2]), ...
                size(pilotIdx, 1)*size(pilotIdx, 3), size(pilotIdx, 2)), ...
                [1 numSym/size(pilotIdx,2), numRx]);
        end
        % Calculate pilot linear indices at Rx
        obj.pPilotLinearIndices = convert3DIndexToLinearIndex(obj, pilotRx3DIndices);
        fullGrid(obj.pPilotLinearIndices) = 2;
    end    
    
    % Calculate data linear indices at Rx
    obj.pDataLinearIndices  = find(fullGrid == 1);
  end
  
  function varargout = stepImpl(obj, x)
    FFTLen = obj.FFTLength;
    CPLen  = obj.CyclicPrefixLength;
    numSym = obj.NumSymbols;
    numRx  = obj.NumReceiveAntennas;        
      
    % Remove Cyclic prefix
    if isscalar(CPLen)
        inputIn3D = reshape(x(1:end, :), [(FFTLen + CPLen), numSym, numRx]);
        preFFT = inputIn3D(CPLen+1:end, :, :);
    else
        preFFT = coder.nullcopy(complex(zeros(FFTLen, numSym, numRx)));
        for symIdx = 1:numSym
            preFFT(:, symIdx, :) = x(FFTLen*(symIdx-1)+sum(CPLen(1:symIdx))+(1:FFTLen), :);
        end
    end

    % FFT: time domain to frequency domain
    postFFT = fft(preFFT, [], 1);

    % FFT shift
    if isreal(postFFT)
        postShift = complex(fftshift(postFFT, 1), 0);
    else
        postShift = fftshift(postFFT,1);
    end
    
    varargout{1} = reshape(postShift(obj.pDataLinearIndices), ...
        [length(obj.pDataLinearIndices)/numSym/numRx, numSym, numRx]);
    
    if obj.PilotOutputPort
        if ismatrix(obj.PilotCarrierIndices)
            varargout{2} = reshape(postShift(obj.pPilotLinearIndices), ...
                [length(obj.pPilotLinearIndices)/numSym/numRx, numSym, numRx]);
        else
            numTx = size(obj.PilotCarrierIndices, 3);
            varargout{2} = permute(reshape(postShift(obj.pPilotLinearIndices), ...
                [length(obj.pPilotLinearIndices)/numTx/numSym/numRx, numTx, numSym, numRx]), ...
                [1 3 2 4]);
        end
    end
  end
  
  function flag = isInactivePropertyImpl(obj, prop)
    switch prop                    
    case 'PilotCarrierIndices'
        flag = ~(obj.PilotOutputPort);        
    otherwise
        flag = false;
    end
  end
  
  function s = saveObjectImpl(obj)
    s = saveObjectImpl@OFDMBase(obj);
  end

  function loadObjectImpl(obj, s, wasLocked)
    loadObjectImpl@OFDMBase(obj, s, wasLocked);
  end

  function s = infoImpl(obj)          
    if ~isLocked(obj)        
        validateProperties(obj);
    end
    
    numSym = obj.NumSymbols;
    numRx  = obj.NumReceiveAntennas;
    
    s.InputSize = [getTimeDomainFrameLength(obj) numRx];

    if numRx == 1
        s.DataOutputSize = [getNumDataCarriers(obj, obj.RemoveDCCarrier, obj.PilotOutputPort) numSym];
    else
        s.DataOutputSize = [getNumDataCarriers(obj, obj.RemoveDCCarrier, obj.PilotOutputPort) numSym numRx];
    end
    
    if obj.PilotOutputPort
        if ismatrix(obj.PilotCarrierIndices)
            s.PilotOutputSize = [size(obj.PilotCarrierIndices, 1) numSym];
        else
            s.PilotOutputSize = [size(obj.PilotCarrierIndices, 1) numSym size(obj.PilotCarrierIndices, 3)];
        end
        
        if numRx > 1
            s.PilotOutputSize = [s.PilotOutputSize numRx];
        end
    end
  end
  
  function num = getNumOutputsImpl(obj)
    num = 1 + obj.PilotOutputPort;
  end

  function flag = isInputSizeLockedImpl(~,~)
     flag = true;
  end
  
  function flag = isInputComplexityLockedImpl(~,~)
    flag = true;
  end
  
  function flag = isOutputComplexityLockedImpl(~,~)
    flag = true;
  end
    
  function varargout = isOutputFixedSizeImpl(~)
    varargout = cell(1, getNumOutputs(obj));
    for i = getNumOutputs(obj)
        varargout{i} = true;
    end
  end
  
  function varargout = isOutputComplexImpl(~)
    varargout = cell(1, getNumOutputs(obj));
    for i = getNumOutputs(obj)
        varargout{i} = true;
    end
  end

  function varargout = getOutputDataTypeImpl(obj)
    varargout = cell(1, getNumOutputs(obj));
    for i = getNumOutputs(obj)
        varargout{i} = 'double';
    end
  end

  function varargout = getOutputSizeImpl(obj)
      % xxx may need input (maximum) size checking here 
      numSym = obj.NumSymbols;
      numRx  = obj.NumReceiveAntennas;        

      varargout = {[getNumDataCarriers(obj, obj.RemoveDCCarrier, obj.PilotOutputPort) numSym numRx]};
      
      if (obj.PilotOutputPort)
          if ismatrx(obj.PilotCarrierIndices)
              varargout{end+1} = [size(obj.PilotCarrierIndices, 1) numSym numRx];
          else
              varargout{end+1} = [size(obj.PilotCarrierIndices, 1) numSym ...
                                  size(obj.PilotCarrierIndices, 3) numRx];
          end
      end
  end
    
  function varargout = getInputNamesImpl(~)
    varargout = {''};
  end
  
  function varargout = getOutputNamesImpl(obj)
    varargout = cell(1, getNumOutputs(obj));
    varargout{1} = '';
    if obj.PilotOutputPort
        varargout{2} = 'Pilot'; 
    end    
  end
  
  function icon = getIconImpl(~)
    icon = sprintf('OFDM\nDemodulator');
  end  
end

methods(Static, Access=protected)
  function header = getHeaderImpl    
    header = matlab.system.display.Header('OFDMDemodulator',...
        'Title', 'OFDM Demodulator');
  end
  
  function groups = getPropertyGroupsImpl
    params = matlab.system.display.Section(...
        'Title', 'Parameters',...
        'PropertyList', {'FFTLength','CyclicPrefixLength','NumGuardBandCarriers',...
                         'RemoveDCCarrier','NumSymbols','NumReceiveAntennas', ...
                         'PilotOutputPort','PilotCarrierIndices'});
    groups = params;
  end
end

end
% [EOF]