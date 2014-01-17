
classdef PHYTransmit < handle
    %#codegen
    properties
        desiredSamplingFrequency
        InterpolationFactor
        tx
        USRPADCSamplingRate
        pSDRuTransmitter
        numFrames = 10;
        DebugFlag = 1;
    end
    
    properties (Constant)
        pReceiveBufferLength = 5120;
        framesToTxOnStep = 1;
    end
    
    
    methods
        % Construct Object
        function obj = PHYTransmit
            
            % System parameters to adjust because of hardware limitation
            obj.desiredSamplingFrequency =  5e6;
            obj.USRPADCSamplingRate = 100e6;
            obj.InterpolationFactor = obj.USRPADCSamplingRate/obj.desiredSamplingFrequency;
            
            [ ~, ~, ~, obj.tx ] = generateOFDMSignal_TX2( 'UnimportantMessage' );
            obj.tx.samplingFreq = obj.desiredSamplingFrequency;% Set desired frequeny
            obj.tx.freqBin = obj.tx.samplingFreq/obj.tx.FFTLength;% Set frequency bin width
            
            
            % Setup transmitter
            obj.pSDRuTransmitter = comm.SDRuTransmitter('192.168.10.2', ...
                'CenterFrequency',      2.2e9, ...
                'InterpolationFactor',  obj.InterpolationFactor,...
                'Gain',                 25);
            
            
        end
        
        % Send Messages
        function Run(obj,inputPayloadMessage,numFrames,ObjReceiver)
            
            
            [~,~, dataToTx, ~ ] = generateOFDMSignal_TX2(inputPayloadMessage);% create shorter simpler function
            
            % Run transmitter
            if obj.DebugFlag
                fprintf('Transmitting... pew! pew!\n');
                fprintf('TX Message: %s\n',inputPayloadMessage);
            end
            for framesTransmitted = 1:numFrames
                step(obj.pSDRuTransmitter, dataToTx);
                step(ObjReceiver);% clean up receive buffer, will be corrupted anyway
            end
           
	    obj.pSDRuTransmitter.reset;%stop transmitting? 
        end
        
        
    end
end

