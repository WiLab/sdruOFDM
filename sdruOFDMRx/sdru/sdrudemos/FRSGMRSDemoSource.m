classdef FRSGMRSDemoSource < matlab.System
%FRSGMRSDemoSource Source for FRS/GMRS Transmitter example
%   H = FRSGMRSDemoSource creates a source System object, H. This object
%   provides three source signals for the example: pure tone, chirp, or
%   audio.
%
%   H = FRSGMRSDemoSource(Name,Value) creates a source object, H, with the
%   specified property Name set to the specified Value. You can specify
%   additional name-value pair arguments in any order as
%   (Name1,Value1,...,NameN,ValueN).
%
%   Step method syntax:
%
%   Y = step(H) returns a source signal, Y, which can be a pure tone,
%   chirp, or audio. Y is a single precision column vector. The FrameLength
%   property determines the length of the output.
%
%   FRSGMRSDemoSource methods:
%
%   step     - Generate source signal (see above)
%   release  - Allow property value and input characteristics changes
%   clone    - Create source object with same property values
%   isLocked - Locked status (logical)
%   reset    - Reset states of source object
%
%   FRSGMRSDemoSource properties:
%
%   Signal                   - Output signal type
%   SampleRate               - Sample rate in Hz
%   SamplesPerFrame          - Samples per frame
%   ToneFrequency            - Pure tone frequency in Hz
%   ChirpSweepTime           - Chirp sweep time in seconds
%   AudioFileName            - Name of audio file
%   AudioDecimationFactor    - Audio decimation factor
%   AudioInterpolationFactor - Audio interpolation factor
%
%   See also FRSGMRSDemoAudioSource, usrpFRSGMRSTransmitter.

%   Copyright 2011-2012 The MathWorks, Inc.
%   $Revision: 1.1.6.2 $Date: 2012/11/05 15:06:43 $

properties (Nontunable)
  %Signal  Output signal type
  %   Specify the output signal type as one of 'Pure tone' | 'Chirp' |
  %   'Audio file'. The default is 'Pure tone'.
  Signal = 'Pure tone';
  %SampleRate Sample rate in Hz
  %   Specify the sample rate of the output as a double or single precision
  %   scalar. The default is 8 kHz. 
  SampleRate = 8000;
  %SamplesPerFrame Samples per frame
  %   Specify the number of samples in an output frame as an integer valued
  %   double or single precision integer valued positive scalar. The
  %   default is 160.
  SamplesPerFrame = 160;
  %ToneFrequency Pure tone frequency in Hz
  %   Specify the pure tone frequency as a double or single precision
  %   scalar. The default is 880 Hz. This property applies when you set the
  %   Signal property to 'Pure tone'.
  ToneFrequency = 880;
  %ChirpSweepTime Chirp sweep time in seconds
  %   Specify the chirp sweep time as a double or single precision scalar.
  %   The default is 3. This property applies when you set the Signal
  %   property to 'Chirp'.
  ChirpSweepTime = 3;
  %AudioFileName Name of audio file
  %   Specify name of the audio file as a string. The default is
  %   'speech_dft.avi'. This property applies when you set the Signal
  %   property to 'Audio file'.
  AudioFileName = 'speech_dft.avi';
  %AudioDecimationFactor Audio decimation factor
  %   Specify the rate conversion decimation factor for the audio file as
  %   a double or single precision integer valued scalar. The default is
  %   441. After rate conversion, the audio sample rate must match the
  %   sample rate specified in the SampleRate property. This property
  %   applies when you set the Signal property to 'Audio file'.
  AudioDecimationFactor = 441;
  %AudioInterpolationFactor Audio interpolation factor
  %   Specify the rate conversion interpolation factor for the audio file
  %   as a double or single precision integer valued scalar. The default is
  %   160. After rate conversion, the audio sample rate must match the
  %   sample rate specified in the SampleRate property. This property
  %   applies when you set the Signal property to 'Audio file'.
  AudioInterpolationFactor = 160;
end

properties (Access = private, Nontunable)
  pSource   % Handle for source object
end

properties (Constant, Hidden)
  SignalSet = matlab.system.StringSet({'Pure tone', 'Chirp', 'Sound file'});
end

methods
  function obj = FRSGMRSDemoSource(varargin)
    setProperties(obj, nargin, varargin{:}, 'Signal', 'SampleRate');
  end

  function set.SampleRate(obj, aRate)
    validateattributes(aRate, {'double', 'single'}, ...
      {'scalar', 'real', 'nonnan', 'finite', 'positive'}, ...
      'FRSGMRSDemoSource', 'SampleRate');
    obj.SampleRate = aRate;
  end
  
  function set.SamplesPerFrame(obj, aLength)
    validateattributes(aLength, {'double', 'single'}, ...
      {'scalar', 'real', 'nonnan', 'finite', 'integer', 'positive'}, ...
      'FRSGMRSDemoSource', 'SamplesPerFrame');
    obj.SamplesPerFrame = aLength;
  end
  
  function set.ToneFrequency(obj, aFreq)
    validateattributes(aFreq, {'double', 'single'}, ...
      {'scalar', 'real', 'nonnan', 'finite', 'positive'}, ...
      'FRSGMRSDemoSource', 'ToneFrequency');
    obj.ToneFrequency = aFreq;
  end
  
  function set.ChirpSweepTime(obj, aTime)
    validateattributes(aTime, {'double', 'single'}, ...
      {'scalar', 'real', 'nonnan', 'finite', 'positive'}, ...
      'FRSGMRSDemoSource', 'ChirpSweepTime');
    obj.ChirpSweepTime = aTime;
  end
  
  function set.AudioFileName(obj, aName)
    validateattributes(aName, {'char'}, {}, ...
      'FRSGMRSDemoSource', 'AudioFileName');
    obj.AudioFileName = aName;
  end
  
  function set.AudioDecimationFactor(obj, aFactor)
    validateattributes(aFactor, {'double', 'single'}, ...
      {'scalar', 'real', 'integer', 'nonnan', 'finite', 'positive'}, ...
      'FRSGMRSDemoSource', 'AudioDecimationFactor');
    obj.AudioDecimationFactor = aFactor;
  end
  
  function set.AudioInterpolationFactor(obj, aFactor)
    validateattributes(aFactor, {'double', 'single'}, ...
      {'scalar', 'real', 'integer', 'nonnan', 'finite', 'positive'}, ...
      'FRSGMRSDemoSource', 'AudioInterpolationFactor');
    obj.AudioInterpolationFactor = aFactor;
  end
end

methods (Access = protected)
  function setupImpl(obj)
    switch obj.Signal
      case 'Pure tone'
        obj.pSource = dsp.SineWave('Frequency', obj.ToneFrequency, ...
          'SampleRate', obj.SampleRate, ...
          'SamplesPerFrame', obj.SamplesPerFrame, ...
          'OutputDataType', 'single');
      case 'Chirp'
        obj.pSource = dsp.Chirp('InitialFrequency', 600, ...
          'TargetFrequency', 1200, ...
          'TargetTime', obj.ChirpSweepTime, ...
          'SweepTime', obj.ChirpSweepTime, ...
          'SampleRate', obj.SampleRate, ...
          'SamplesPerFrame', obj.SamplesPerFrame, ...
          'OutputDataType', 'single');
      case 'Sound file'
        obj.pSource = FRSGMRSDemoAudioSource('speech_dft.avi', ...
          'SamplesPerFrame', obj.SamplesPerFrame, ...
          'DecimationFactor', obj.AudioDecimationFactor, ...
          'InterpolationFactor', obj.AudioInterpolationFactor);
    end
  end

  function out = stepImpl(obj)
    out = step(obj.pSource);
  end

  function resetImpl(obj)
    reset(obj.pSource);
  end

  function releaseImpl(obj)
    release(obj.pSource);
  end

  function num = getNumInputsImpl(obj) %#ok<MANU>
    num = 0;
  end

  function flag = isInactivePropertyImpl(obj, prop)
    flag = false;
    switch prop
      case 'ToneFrequency'
        if ~strcmp(obj.Signal, 'Pure tone')
          flag = true;
        end
      case 'ChirpSweepTime'
        if ~strcmp(obj.Signal, 'Chirp')
          flag = true;
        end
      case {'AudioFileName', 'AudioDecimationFactor', ...
          'AudioInterpolationFactor'}
        if ~strcmp(obj.Signal, 'Sound file')
          flag = true;
        end
    end
  end
end
end
