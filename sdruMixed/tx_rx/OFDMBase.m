classdef (Hidden) OFDMBase < matlab.System & matlab.system.mixin.Propagates
                                       
%OFDMBase Base object for OFDMModulator and OFDMDemodulator System objects

% Copyright 2013 The MathWorks, Inc.

%#codegen
%#ok<*EMCA>

properties (Nontunable)
    %FFTLength FFT length
    % Specify the IFFT length. This property can be set to an integer
    % scalar. The value must be a power of two. The default value of
    % this property is 64.
    FFTLength = 64;
    %CyclicPrefixLength Cyclic prefix length
    % Specify the cyclic prefix length. This property can be set to a
    % non-negative interher scalar. The default value of this property is 16.
    CyclicPrefixLength = 16;
    %NumGuardBandCarriers Number of guard bands
    % Specify the lower and upper guard bands in frequency domain.This
    % property can be set to a non-nagative two-element vector. 
    % The default setting of this property is [6 5].
    NumGuardBandCarriers = [6; 5];
    %NumSymbols Number of OFDM symbols
    % Specify the number of OFDM symbols at the output. The default value 
    % of this property is 1.
    NumSymbols = 1;
    %PilotCarrierIndices Pilot subcarrier indices
    % Specify the locations where pilots are to be inserted. You can
    % set this property to a numeric scalar, column vector, matrix, or
    % 3-D array. The defalut value of the property is [-21; -7; 7; 21].
    PilotCarrierIndices = [12;26;40;54];
end

properties (Access = protected)
    pDataLinearIndices;  % Nontunable ideally
end

properties (Access = protected, Nontunable)
    pPilotLinearIndices;
end

methods
  function obj = OFDMBase(varargin) % Constructor
    setProperties(obj, nargin, varargin{:});
  end
    
  function set.FFTLength(obj, fftLen)
    propName = 'FFTLength';
%     validateattributes(fftLen, {'numeric'}, ...
%         {'real','scalar','integer','finite','>=',8}, ...
%         [class(obj) '.' propName], propName);  
    
    log2FFTLen = log2(fftLen);
    coder.internal.errorIf(log2FFTLen ~= floor(log2FFTLen), ...
        'comm:OFDM:xxx');

    obj.FFTLength = fftLen;
  end
  
  function set.CyclicPrefixLength(obj, CPLen)
    propName = 'CyclicPrefixLength';
%     validateattributes(CPLen, {'numeric'}, ...
%         {'real','row','integer','nonnegative','finite'}, ...
%         [class(obj) '.' propName], propName);  

    obj.CyclicPrefixLength = CPLen;
  end
    
  function set.NumGuardBandCarriers(obj, guardBands)
    propName = 'NumGuardBandCarriers';
%     validateattributes(guardBands, {'numeric'}, ...
%         {'real','integer','nonnegative','finite','size', [2, 1]}, ...
%         [class(obj) '.' propName], propName);  

    obj.NumGuardBandCarriers = guardBands;
  end
  
  function set.NumSymbols(obj, numSym)
    propName = 'NumSymbols';
%     validateattributes(numSym, {'numeric'}, ...
%         {'real','scalar','integer','positive','finite'}, ...
%         [class(obj) '.' propName], propName);  
    
    obj.NumSymbols = numSym;
  end
  
  function set.PilotCarrierIndices(obj, pilotIdx)
    propName = 'PilotCarrierIndices';
%     validateattributes(pilotIdx, {'numeric'}, ...
%         {'real','integer','positive','finite','3d'}, ...
%         [class(obj) '.' propName], propName);  
    
    % Check the 3rd dimension for numTx
    coder.internal.errorIf((ndims(pilotIdx) == 3) && (size(pilotIdx, 3) > 64), ...
        'comm.OFDM.xxx');

    numPilotPerSym = numel(pilotIdx)/size(pilotIdx,2);
    for symIdx = 1:size(pilotIdx, 2)
        pilotIdxPerSym = pilotIdx(:,symIdx,:);        
        coder.internal.errorIf( numPilotPerSym ~= length(unique(pilotIdxPerSym(:))) , ...
            'comm:OFDM:xxx');
        % Error message: 
        % If pilot index is 2-D, the indices per symbol must be unique;
        % If pilot index is 3-D, the indices across transmit antennas per symbol must be unique.
    end
    
    obj.PilotCarrierIndices = pilotIdx;
  end
end

methods(Access = protected)  
  function s = saveObjectImpl(obj)
    s = saveObjectImpl@matlab.System(obj);
    if isLocked(obj)
        s.pDataLinearIndices  = obj.pDataLinearIndices;
        s.pPilotLinearIndices = obj.pPilotLinearIndices; 
    end
  end
  
  function loadObjectImpl(obj, s, wasLocked)
    if (wasLocked)
        obj.pDataLinearIndices  = s.pDataLinearIndices;
        obj.pPilotLinearIndices = s.pPilotLinearIndices; 
    end
    loadObjectImpl@matlab.System(obj, s);
  end
  
  function dependentPropertyValidation(obj, hasPilot, hasDCNull)
    FFTLen     = obj.FFTLength;
    halfFFTLen = obj.FFTLength/2;
    numSym     = obj.NumSymbols;
    
    % Cyclic prefix
    CPLen = obj.CyclicPrefixLength;    
    coder.internal.errorIf( ...
        (~isscalar(CPLen) && (length(CPLen) ~= numSym)) || any(CPLen>FFTLen), 'comm:OFDM:xxx');
        
    % Guard bands
    guardBand = obj.NumGuardBandCarriers;
    coder.internal.errorIf(any(guardBand >= halfFFTLen), 'comm:OFDM:xxx');    
    
    % Pilot indices
    if hasPilot
        pilotIdx = obj.PilotCarrierIndices;        
        numPilotPerSym = size(pilotIdx, 1); % Number of pilots per symbol
        coder.internal.errorIf( ...
            (numPilotPerSym >= FFTLen) || ...
            ((size(pilotIdx, 2) ~= 1) && (size(pilotIdx, 2) ~= numSym)) || ...
            ... % The 3rd dimension is checked in OFDM Modulator only
            any(pilotIdx(:) < (guardBand(1)+1)) || ...
            any(pilotIdx(:) > (FFTLen-guardBand(2))) || ...
            any(pilotIdx(:) == halfFFTLen+1), ...
            'comm:OFDM:xxx');        
        
        numPilotAllTxPerSym = numel(pilotIdx)/size(pilotIdx, 2); % i.e., pilots + custom nulls
    else
        numPilotAllTxPerSym = 0;        
    end
    
    % Length check for total guard band carriers, null carriers and pilot carriers
    coder.internal.errorIf(...
        (sum(guardBand) + hasDCNull + numPilotAllTxPerSym) >= FFTLen, ...
        'comm:OFDM:xxx');          
  end
  
  function linearIdx = convert3DIndexToLinearIndex(obj, IdxIn3D)
    FFTLen = obj.FFTLength;
    num1stDim = size(IdxIn3D, 1);
    num2ndDim = size(IdxIn3D, 2);
    num3rdDim = size(IdxIn3D, 3);
    
    expanded2ndDimIdx = repmat(1:num2ndDim, [num1stDim 1 num3rdDim]);
    expanded3rdDimIdx = repmat(1:num3rdDim, [num1stDim*num2ndDim 1]);
    linearIdx = sub2ind([FFTLen num2ndDim num3rdDim], ...
        IdxIn3D(:), expanded2ndDimIdx(:), expanded3rdDimIdx(:));
  end
  
  function numCarriers = getNumDataCarriers(obj, hasDCNull, hasPilot)
    numCarriers = obj.FFTLength - ...
      sum(obj.NumGuardBandCarriers) - ... % Guard bands
      hasDCNull - ...                     % DC null
      hasPilot*numel(obj.PilotCarrierIndices)/size(obj.PilotCarrierIndices, 2); % Pilots & Custom nulls
  end
      
  function frameLen = getTimeDomainFrameLength(obj)
    FFTLen = obj.FFTLength;
    CPLen  = obj.CyclicPrefixLength;
    numSym = obj.NumSymbols;
    
    frameLen = FFTLen*numSym + sum(repmat(CPLen, [1 numSym/length(CPLen)]));
  end
end

end