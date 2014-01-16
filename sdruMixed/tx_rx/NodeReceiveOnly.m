function NodeReceiveOnly

Receiver = PHYReceive;
Transmitter = PHYTransmit;

coder.extrinsic('disp');
while 1

    % Send something
    %lookingForACK = false;
    %MACLayerReceiver(Receiver,Transmitter, lookingForACK);
    response = Receiver.Run;
    disp(response);
    
end


end

