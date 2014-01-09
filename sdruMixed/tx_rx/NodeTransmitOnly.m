function NodeTransmitOnly

Receiver = PHYReceive;
Transmitter = PHYTransmit;

for i = 1 : 20
    
    
    % Send something
    MACLayerTransmitter(Receiver,Transmitter,'HelloShannon')
    
    
end




end

