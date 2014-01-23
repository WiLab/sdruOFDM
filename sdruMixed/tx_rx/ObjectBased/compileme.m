function compileme

Receiver = PHYReceive;
Transmitter = PHYTransmit;


while 1

    % Send something
    message = 'TestMessage';
    MACLayerTransmitter(Receiver,Transmitter,message);
    MACLayerReceiver(Receiver,Transmitter)
    
    
end


end

