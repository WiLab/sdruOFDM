classdef TX
    % The purpose of this class is to provide an API for application calls
    % from the MAC layer to the physical layer, whos operations are located
    % in private folder to help separate the TX and RX chains
    
    properties (Constant)
            enableMA = true;% not important for transmitter
    end
    
    properties
        InterpolationFactor
        desiredSamplingFrequency =  5e6;
        USRPADCSamplingRate = 100e6;
        numFrames = 10; % Just a placeholder
        Repeats = 1;  % How many times should transmitter repeat message
        Message  % Actual message as a string
        framesToTxOnStep = 10; % May have to tune for underflow issues
        txOrg
        tx
    end
    
    %
    methods
        %Constructor (Setup Object)
        function obj = TX
            obj.InterpolationFactor = obj.USRPADCSamplingRate/obj.desiredSamplingFrequency;
        
            [ obj.txOrg, obj.tx ] = generateOFDMSignal( obj.framesToTxOnStep, obj.enableMA );
            obj.tx.samplingFreq = obj.desiredSamplingFrequency;% Set desired frequeny
            obj.tx.FreqBin = obj.tx.samplingFreq/obj.tx.FFTLength;% Set frequency bin width
            
        end 
        
        % Transmit message with hardware
        function Send(obj)
                sendMessageSDRu(  obj.InterpolationFactor, obj.Message, obj.Repeats, obj.framesToTxOnStep, obj.numFrames );
        end
        
        % Set Message
        function obj=set.Message(obj,Message)
            obj.Message = Message;
        end 
        
        % Setup transmitter
        function Compile(obj)
            disp('Generating code for transmitter');
            %codegen sdruOFDMTransmitterRun -args { InterpolationFactor, txOrg }
            compilesdru('sdruOFDMTransmitterRun','mex','-args', { obj.InterpolationFactor, obj.txOrg});
        end
        
        
    end
    
    
end

