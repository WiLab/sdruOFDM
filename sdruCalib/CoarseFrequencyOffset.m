
%   Copyright 2013 The MathWorks, Inc.

classdef CoarseFrequencyOffset < matlab.System
% Define a coarse frequency offset estimation System object.
    %#codegen
% Properties
    properties (Nontunable)
        %FFTSize = 2048; 
        %SampleRate = 200e3; 
        FFTSize = 4096; 
        SampleRate = 5000e3; 
    end

% Methods
    methods
        function obj = CoarseFrequencyOffset(varargin)
            setProperties(obj,nargin,varargin{:});
        end
    end
    
    
    methods (Access=protected)
        function setupImpl(~, ~)      
        end
        
        function freqOffset = stepImpl(obj, x)
          % Find offset index
          FFTSig = fft(x,obj.FFTSize);
          [~,maxIdx] = max(FFTSig);
          
          % Map [0, Fs] to [-Fs/2, Fs/2]
          offsetIdx = floor(maxIdx/(obj.FFTSize /2+1))*obj.FFTSize +1-maxIdx;
          
          % Map offset index to a frequency value.
          deltaFreq = obj.SampleRate/obj.FFTSize; 
          
          freqOffset = deltaFreq * offsetIdx; 
        end
    end
end
