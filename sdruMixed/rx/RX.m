classdef RX
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
        tx
        offsetCompensationValue
        numFrames
        useScopes
        printReceivedData
    end
    
    methods
        %Constructor
        function obj = RX
            [ obj.tx, obj.offsetCompensationValue, obj.numFrames, obj.useScopes, obj.printReceivedData ] = setupSDRuReceiver( true );
        end
        
        function Response = Receive(obj)
            Response = messageProcessor( obj.tx, obj.offsetCompensationValue, obj.numFrames, obj.useScopes, obj.printReceivedData); 
        end
        
        
        
        function Compile(obj)
            disp('Compiling receiver...');
            result = compilesdru('receiveOFDM80211a_sdru','mex','-args', { coder.Constant(obj.tx), obj.offsetCompensationValue,...
                obj.numFrames, coder.Constant(obj.useScopes) , coder.Constant(obj.printReceivedData) });
            %Error occured
            if isempty(result.summary.buildResults)
                disp('Receiver unable to compile correctly:(');
            end
        end
        
        
    end
    
end

