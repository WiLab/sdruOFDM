classdef RX_CG
    % The purpose of this class is to provide an API for application calls
    % from the MAC layer to the physical layer, whos operations are located
    % in private folder to help separate the TX and RX chains
    
    properties (Constant)
        enableMA = true;% not important for transmitter
        %receiveBufferLength = 5120;
    end
    
    properties
        desiredSamplingFrequency =  5e6;
        USRPDACSamplingRate = 100e6;
        offsetCompensationValue = -73242.187500; %Generated from sdruFrequencyCalibration demos
        InterpolationFactor
        USRPADCSamplingRate = 100e6;
        tx
        numFrames
        useScopes
        printReceivedData
        numFreqToAverage
        rx
    end
    
    properties (Access = private)
        receiveBufferLength % Defines the size of vector that will be processed in AGC system object
    end
    
    
    properties (Access=private)
        ObjPreambleDemod
        ObjDataDemod
        ObjSDRuReceiver
        ObjAGC
    end
        
    methods (Access=protected)
        %Constructor
        function setupImpl(obj, ~)%
            % Create PHY Receive Chain
            %Parameters
            [ obj.ObjPreambleDemod,obj.ObjDataDemod,~, obj.rx ] = generateOFDMSignal;
            obj.rx.DecimationFactor = obj.USRPDACSamplingRate/obj.rx.samplingFreq;
            obj.rx.receiveBufferLength = ceil( obj.rx.frameLength*4 ); %Size of Buffer of sliding window
            
            % Create TX structure for receiver construction and data vector of desired size
            obj.rx.samplingFreq = obj.desiredSamplingFrequency;% Set desired frequeny
            obj.rx.freqBin = obj.rx.samplingFreq/obj.rx.FFTLength;% Set frequency bin width
            
            obj.receiveBufferLength = 5120;
            
            % Setup USRP Object
            obj.ObjSDRuReceiver = comm.SDRuReceiver( '192.168.10.2', ...
                'CenterFrequency',      2.2e9 + obj.offsetCompensationValue, ...
                'DecimationFactor',     obj.rx.DecimationFactor,...
                'FrameLength',          obj.receiveBufferLength,...
                'OutputDataType',       'double',...
                'Gain',                 18);
            
            %Create memory structure to collect measurements for sync algorithms
            obj.numFreqToAverage = 15; %Number of frequency estimates to be averaged together for frequency corrections (Higher==More stability, Lower==More responsiveness)
            %[estimate, frameBER] = initializeOFDMSyncMemory_sdr( rx.receiveBufferLength, numFreqToAverage, rx, false );
            
            % Gain control
            obj.ObjAGC = comm.AGC('UpdatePeriod', obj.receiveBufferLength);
        end
    end
        
   methods
            
        function output = Receive(obj)
            
            
        
        end
        
    end
    
end

