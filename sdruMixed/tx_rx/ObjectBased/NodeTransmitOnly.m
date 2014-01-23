function NodeTransmitOnly

%Receiver = PHYReceive;
%Transmitter = PHYTransmit;
PHY = PHYLayer;

for i = 1 : 20e4
    
    
    % Send something
    MACLayerTransmitter(PHY,'HelloShannon')
    %Transmitter.Run('HelloShannon',10e4);

    fprintf('TOP| Done for instance, waiting some time\n');
    PHY.Wait(6000);%Seconds
    
end




end

