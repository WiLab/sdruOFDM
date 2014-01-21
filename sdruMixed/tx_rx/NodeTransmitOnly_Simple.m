function NodeTransmitOnly_Simple

% Receiver = PHYReceive;
% Transmitter = PHYTransmit;
PHY = PHYLayer;

for i = 1 : 20e4
    
    
    % Send something
    %MACLayerTransmitter(Receiver,Transmitter,'HelloShannon')
    PHY.Transmit('HelloShannon',1e4);
    
end




end

