classdef FRSGMRSDemoCTCSSDecoder < matlab.System
%FRSGMRSDemoCTCSSDecoder CTCSS decoder for FRS/GMRS receiver example
%   H = FRSGMRSDemoCTCSSDecoder creates a CTCSS code decoder System object,
%   H. This object determines uses the Goertzel algorithm to determine
%   which tone was sent.
%
%   H = FRSGMRSDemoCTCSSDecoder(Name,Value) creates a CTCSS decoder object,
%   H, with the specified property Name set to the specified Value. You can
%   specify additional name-value pair arguments in any order as
%   (Name1,Value1,...,NameN,ValueN).
%
%   Step method syntax:
%
%   CODE = step(H,X) detects the tone in input X and returns tone index in
%   CODE. The input X can be a double or single precision data type scalar
%   or vector complex values. The object implements the Goertzel algorithm.
%   The algorithm produces a code index estimate after processing a block
%   of samples. When the number of processed samples reaches or exceeds the
%   value specified in the MinimumBlockLength property, the next call of
%   the step method starts a new estimate. Below are the CTCSS tone numbers
%   and corresponding frequency values.
%
%   PL   Hz     PL   Hz      PL   Hz
%   --  ----    --  -----    --  -----
%    1  67.0    12  100.0    32  203.5
%    2  71.9    13  103.5    33  210.7
%    3  74.4    14  107.2    34  218.1
%    4  77.0    15  110.9    35  225.7
%    5  79.7    16  114.8    36  233.6
%    6  82.5    17  118.8    37  241.8
%    7  85.4    18  123.0    38  250.3
%    8  88.5    19  127.3
%    9  91.5    20  131.8
%   10  94.8    21  136.5
%   11  97.4    22  141.3
%               23  146.2
%               24  151.4
%               25  156.7
%               26  162.2
%               27  167.9
%               28  173.8
%               29  179.9
%               30  186.2
%               31  192.8
%
%   FRSGMRSDemoCTCSSDecoder methods:
%
%   step     - Estimate received tone frequency (see above)
%   release  - Allow property value and input characteristics changes
%   clone    - Create CTCSS decoder object with same property values
%   isLocked - Locked status (logical)
%   reset    - Reset states of CTCSS decoder object
%
%   FRSGMRSDemoCTCSSDecoder properties:
%
%   MinimumBlockLength - Minimum block length in samples
%   SampleRate         - Sample rate in Hz
%
%   See also usrpFRSGMRSReceiver.

%   Copyright 2011-2012 The MathWorks, Inc.
%   $Revision: 1.1.6.2 $Date: 2012/11/05 15:06:42 $

properties
  %MinimumBlockLength Minimum block length in samples
  %   Specify the minimum block length as a double or single precision,
  %   real integer valued scalar. The default is 4000. The algorithm runs
  %   for at least MinimumBlockLength samples, makes a code estimate, and
  %   resets.
  MinimumBlockLength = 4000;
  %SampleRate Sample rate in Hz
  %   Specify the sample rate as a numeric, real scalar. The default is 1.
  SampleRate = 1;
end

properties (Access = private)
  pToneFrequencies = ...
    [67.0 71.9 74.4 77.0 79.7 82.5 85.4 88.5  91.5 94.8 97.4  ...
    100.0 103.5 107.2 110.9 114.8 118.8 123.0 127.3 131.8 136.5 141.3 ...
    146.2 151.4 156.7 162.2 167.9 173.8 179.9 186.2 192.8 ...
    203.5 210.7 218.1 225.7 233.6 241.8 250.3];
  pCoefficients             % Goertzel coefficients
  pState                    % [s(n-1) s(n-2)]
  pNumProcessedSamples = 0; % Number of processed samples
  pCodeIndexEstimate = 0;   % Estimated code index
  pFrameLength              % Number of samples processed at each step
  pNumTones                 % Number of possible tones
  pInputDataType            % Input data type
end

methods
  function obj = FRSGMRSDemoCTCSSDecoder(varargin)
    %FRSGMRSDemoCTCSSDecoder Constructor
    setProperties(obj, nargin, varargin{:});
  end
  
  function set.MinimumBlockLength(obj, aLength)
    validateattributes(aLength, {'double', 'single'}, ...
      {'scalar', 'real', 'integer', 'nonnan', 'finite'}, ...
      'FRSGMRSDemoCTCSSDecoder', 'MinimumBlockLength');
    obj.MinimumBlockLength = aLength;
  end
  
  function set.SampleRate(obj, aRate)
    validateattributes(aRate, {'double', 'single'}, ...
      {'scalar', 'real', 'nonnan', 'finite'}, ...
      'FRSGMRSDemoCTCSSDecoder', 'SampleRate');
    obj.SampleRate = aRate;
  end
end

methods (Access = protected)
  function setupImpl(obj, x)
    % Calculate Goertzel coefficients for each tone frequency
    obj.pCoefficients  = 2*cos(2*pi*obj.pToneFrequencies'/obj.SampleRate);
    obj.pNumTones      = length(obj.pToneFrequencies);
    obj.pInputDataType = class(x);
    obj.pFrameLength   = length(x);
  end

  function code = stepImpl(obj, x)
    % We may not need the following, store to local variables, trick for
    % 11b or 12a.
    currentState = obj.pState;
    coeffs = obj.pCoefficients;
    
    % For each possible tone frequency calculate states, s. Since the
    % Goertzel algorithm can be implemented as an IIR filter, use the
    % filter function.
    for p = 1:obj.pNumTones
      % s(n) = x(n) + 2cos(2*pi*w)s(n-1) - s(n-2)
      [~, currentState(:, p)] = filter(1, [1 -coeffs(p) 1], ...
        x, currentState(:, p));
    end

    obj.pNumProcessedSamples = obj.pNumProcessedSamples + obj.pFrameLength;

    if (obj.pNumProcessedSamples >= obj.MinimumBlockLength)
      % Processed enough samples. Estimate received power at each tone
      % frequency.
      power = currentState(2,:).^2 + currentState(1,:).^2 ...
        - coeffs' .* currentState(2,:) .* currentState(1,:);
      % Estimate code index
      [~, obj.pCodeIndexEstimate] = max(power);
      % Reset for next block
      resetImpl(obj);
    end
    
    obj.pState = currentState;

    code = int8(obj.pCodeIndexEstimate);
  end

  function resetImpl(obj)
    obj.pState = zeros(2, obj.pNumTones, obj.pInputDataType);
    obj.pNumProcessedSamples = 0;
  end
end
end
