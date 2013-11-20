classdef sdruQPSKRx < matlab.System
%#codegen
    
%   Copyright 2012 The MathWorks, Inc.    
    
    properties (Nontunable)
        DesiredAmplitude
        ModulationOrder
        DownsamplingFactor
        CoarseFrequencyCompFFTSize
        PhaseRecoveryLoopBandwidth
        PhaseRecoveryDampingFactor
        TimingRecoveryLoopBandwidth
        TimingRecoveryDampingFactor
        PostFilterOversampling
        PhaseErrorDetectorGain
        PhaseRecoveryGain
        TimingErrorDetectorGain
        TimingRecoveryGain
        FrameSize
        BarkerLength
        MessageLength
        SampleRate
        DataLength
        ReceiverFilterCoefficients
        DescramblerBase
        DescramblerPolynomial
        DescramblerInitialConditions
        PrintOption
    end
    
    properties (Access=private)
        pAGC
        pRxFilter
        pCoarseFreqCompensator
        pFineFreqCompensator
        pTimingRec
        pDataDecod
        pOldOutput % Stores the previous output of fine frequency compensation which is used by the same System object for phase error detection
    end
    
    properties (Access = private, Nontunable)
        pUpdatePeriod % Defines the size of vector that will pe processed in AGC System object
    end
    
    methods
        function obj = sdruQPSKRx(varargin)
            setProperties(obj,nargin,varargin{:});
        end
    end
    
    methods (Access=protected)
        function setupImpl(obj, ~)
            obj.pUpdatePeriod = 4;
            obj.pAGC = comm.AGC('UpdatePeriod',obj.pUpdatePeriod);
            obj.pRxFilter = dsp.FIRDecimator(...
                obj.DownsamplingFactor,obj.ReceiverFilterCoefficients);
            obj.pCoarseFreqCompensator = QPSKCoarseFrequencyCompensator(...
                'ModulationOrder', obj.ModulationOrder, ...
                'CoarseFrequencyCompFFTSize', obj.CoarseFrequencyCompFFTSize, ...
                'SampleRate', obj.SampleRate, ...
                'DownsamplingFactor', obj.DownsamplingFactor);
            
            % Refer C.57 to C.61 in Michael Rice's "Digital Communications 
            % - A Discrete-Time Approach" for K1 and K2
            theta = obj.PhaseRecoveryLoopBandwidth/...
                (obj.PhaseRecoveryDampingFactor + ...
                0.25/obj.PhaseRecoveryDampingFactor)/obj.PostFilterOversampling;
            d = 1 + 2*obj.PhaseRecoveryDampingFactor*theta + theta*theta;
            K1 = (4*obj.PhaseRecoveryDampingFactor*theta/d)/...
                (obj.PhaseErrorDetectorGain*obj.PhaseRecoveryGain);
            K2 = (4*theta*theta/d)/...
                (obj.PhaseErrorDetectorGain*obj.PhaseRecoveryGain);
            obj.pOldOutput = complex(0); % used to store past value
            obj.pFineFreqCompensator = QPSKFineFrequencyCompensator( ...
                'ProportionalGain', K1, ...
                'IntegratorGain', K2, ...
                'DigitalSynthesizerGain', -1*obj.PhaseRecoveryGain);
            
            % Refer C.57 to C.61 in Michael Rice's "Digital Communications 
            % - A Discrete-Time Approach" for K1 and K2
            theta = obj.TimingRecoveryLoopBandwidth/...
                (obj.TimingRecoveryDampingFactor + ...
                0.25/obj.TimingRecoveryDampingFactor)/obj.PostFilterOversampling;
            d = 1 + 2*obj.TimingRecoveryDampingFactor*theta + theta*theta;
            K1 = (4*obj.TimingRecoveryDampingFactor*theta/d)/...
                (obj.TimingErrorDetectorGain*obj.TimingRecoveryGain);
            K2 = (4*theta*theta/d)/...
                (obj.TimingErrorDetectorGain*obj.TimingRecoveryGain);
            obj.pTimingRec = QPSKTimingRecovery('ProportionalGain', K1,...
                'IntegratorGain', K2, ...
                'PostFilterOversampling', obj.PostFilterOversampling, ...
                'BufferSize', obj.FrameSize);
            obj.pDataDecod = sdruQPSKDataDecoder('FrameSize', obj.FrameSize, ...
                'BarkerLength', obj.BarkerLength, ...
                'ModulationOrder', obj.ModulationOrder, ...
                'DataLength', obj.DataLength, ...
                'MessageLength', obj.MessageLength, ...
                'DescramblerBase', obj.DescramblerBase, ...
                'DescramblerPolynomial', obj.DescramblerPolynomial, ...
                'DescramblerInitialConditions', obj.DescramblerInitialConditions, ...
                'PrintOption', obj.PrintOption);
        end
        
        
        function BER =  stepImpl(obj, bufferSignal)
            
            % Apply automatic gain control to the signal
            AGCSignal = obj.DesiredAmplitude*step(obj.pAGC, bufferSignal);
            
            % Pass the signal through square root raised cosine received
            % filter
            RCRxSignal = step(obj.pRxFilter,AGCSignal);
            
            % Coarsely compensate for the frequency offset
            coarseCompSignal = step(obj.pCoarseFreqCompensator, RCRxSignal);
            
            % Buffers to store values required for plotting
            coarseCompBuffer = ...
                coder.nullcopy(complex(zeros(size(coarseCompSignal))));
            timingRecBuffer = coder.nullcopy(zeros(size(coarseCompSignal)));
            
            % Scalar processing for fine frequency compensation and timing
            % recovery 
            BER = zeros(3,1);
            for i=1:length(coarseCompSignal)
                
                % Fine frequency compensation
                fineCompSignal = step(obj.pFineFreqCompensator, ...
                    [obj.pOldOutput coarseCompSignal(i)]);
                coarseCompBuffer(i) = fineCompSignal;
                obj.pOldOutput = fineCompSignal;
                
                % Timing recovery of the received data
                [dataOut, isDataValid, timingRecBuffer(i)] = ...
                    step(obj.pTimingRec, fineCompSignal);
                
                if isDataValid
                    % Decoding the received data
                    BER = step(obj.pDataDecod, dataOut);
                end
            end
            
        end

    end
end

