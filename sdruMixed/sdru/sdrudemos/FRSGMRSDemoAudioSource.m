classdef FRSGMRSDemoAudioSource < matlab.System
%FRSGMRSDemoAudioSource Audio source for FRS/GMRS Transmitter example
%   H = FRSGMRSDemoAudioSource creates an audio source System object, H.
%   This object reads an audio file, resamples, and outputs a frame of
%   samples.
%
%   H = FRSGMRSDemoAudioSource(Name,Value) creates an audio source object,
%   H, with the specified property Name set to the specified Value. You can
%   specify additional name-value pair arguments in any order as
%   (Name1,Value1,...,NameN,ValueN).
%
%   Step method syntax:
%
%   Y = step(H) reads the audio file specified by the FileName property and
%   outputs a frame of samples, Y. Y is a single precision column vector.
%   The FrameLength property determines the length of the output.
%
%   FRSGMRSDemoAudioSource methods:
%
%   step     - Read audio source signal (see above)
%   release  - Allow property value and input characteristics changes
%   clone    - Create audio source object with same property values
%   isLocked - Locked status (logical)
%   reset    - Reset states of audio source object
%
%   FRSGMRSDemoAudioSource properties:
%
%   FileName            - Name of audio file
%   SamplesPerFrame     - Samples per frame
%   DecimationFactor    - Decimation factor
%   InterpolationFactor - Interpolation factor
%   Gain                - Audio gain
%
%   See also FRSGMRSDemoSource, usrpFRSGMRSTransmitter.

%   Copyright 2011-2012 The MathWorks, Inc.
%   $Revision: 1.1.6.2 $Date: 2012/11/05 15:06:41 $

properties (Nontunable)
  %FileName Name of audio file
  %   Specify name of the audio file as a string. The default is
  %   'speech_dft.avi'.
  FileName = 'speech_dft.avi';
  %SamplesPerFrame Samples per frame
  %   Specify the number of samples in an output frame as an integer valued
  %   double or single precision integer valued positive scalar. The
  %   default is 160.
  SamplesPerFrame = 160;
  %DecimationFactor Decimation factor
  %   Specify the rate conversion decimation factor for the audio file  as
  %   a double or single precision integer valued scalar. The default is
  %   441.
  DecimationFactor = 441;
  %InterpolationFactor Interpolation factor
  %   Specify the rate conversion interpolation factor for the audio file
  %   as a double or single precision integer valued scalar. The default is
  %   160.
  InterpolationFactor = 160;
  %Gain    Audio gain in dB
  %   Specify the audio gain applied after rate conversion as a double or
  %   single precision scalar. The default is 0.
  Gain = 0;
end
  
properties (Access = private, Nontunable)
  pSource     % Handle for source object
  pFilter     % Handle for filter object
  pLinearGain
end

methods
  function obj = FRSGMRSDemoAudioSource(varargin)
    setProperties(obj, nargin, varargin{:}, 'FileName');
  end
  
  function set.FileName(obj, aName)
    validateattributes(aName, {'char'}, {}, ...
      'FRSGMRSDemoAudioSource', 'FileName');
    obj.FileName = aName;
  end
  
  function set.SamplesPerFrame(obj, aLength)
    validateattributes(aLength, {'double', 'single'}, ...
      {'scalar', 'real', 'nonnan', 'finite', 'integer', 'positive'}, ...
      'FRSGMRSDemoAudioSource', 'SamplesPerFrame');
    obj.SamplesPerFrame = aLength;
  end
  
  function set.DecimationFactor(obj, aFactor)
    validateattributes(aFactor, {'double', 'single'}, ...
      {'scalar', 'real', 'integer', 'nonnan', 'finite', 'positive'}, ...
      'FRSGMRSDemoAudioSource', 'DecimationFactor');
    obj.DecimationFactor = aFactor;
  end
  
  function set.InterpolationFactor(obj, aFactor)
    validateattributes(aFactor, {'double', 'single'}, ...
      {'scalar', 'real', 'integer', 'nonnan', 'finite', 'positive'}, ...
      'FRSGMRSDemoAudioSource', 'InterpolationFactor');
    obj.InterpolationFactor = aFactor;
  end
  
  function set.Gain(obj, aGain)
    validateattributes(aGain, {'double', 'single'}, ...
      {'scalar', 'real', 'nonnan', 'finite'}, ...
      'FRSGMRSDemoAudioSource', 'Gain');
    obj.Gain = aGain;
  end
end

methods (Access = protected)
  function setupImpl(obj)
    obj.pSource = dsp.AudioFileReader(...
      'SamplesPerFrame', obj.SamplesPerFrame / ...
      obj.InterpolationFactor * obj.DecimationFactor, ... 
      'OutputDataType', 'single');
    hmfilt = mfilt.firsrc(obj.InterpolationFactor,obj.DecimationFactor);
    obj.pFilter = dsp.FIRRateConverter(hmfilt.RateChangeFactors(1), ...
      hmfilt.RateChangeFactors(2), hmfilt.Numerator);
    obj.pLinearGain = 10^(obj.Gain/10);
  end

  function out = stepImpl(obj)
    out = step(obj.pSource);
    out = obj.pLinearGain * step(obj.pFilter, out);
  end

  function resetImpl(obj)
    reset(obj.pSource);
    reset(obj.pFilter);
  end

  function releaseImpl(obj)
    release(obj.pSource);
    release(obj.pFilter);
  end

  function num = getNumInputsImpl(obj) %#ok<MANU>
    num = 0;
  end
end
end
