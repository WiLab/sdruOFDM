function NodeReceiveOnly

%Receiver = PHYReceive;
%Transmitter = PHYTransmit;
PHY = PHYLayer;

coder.extrinsic('disp');
while 1

    % Send something
    lookingForACK = false;
    MACLayerReceiver(PHY, lookingForACK);
    %response = Receiver.Run;
    %disp(response);
    
end


end

