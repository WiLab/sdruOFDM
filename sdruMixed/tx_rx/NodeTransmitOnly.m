function NodeTransmitOnly

%Receiver = PHYReceive;
%Transmitter = PHYTransmit;
PHY = PHYLayer;

for i = 1 : 20e4
    
    
    % Send something
    MACLayerTransmitter(PHY,'HelloShannon')
    %Transmitter.Run('HelloShannon',10e4);

    disp('TOP| Done for instance, waiting some time');
    pause(60);
    
end




end

