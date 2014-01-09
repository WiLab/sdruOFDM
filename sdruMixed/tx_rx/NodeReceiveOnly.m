function NodeReceiveOnly

Receiver = PHYReceive;
Transmitter = PHYTransmit;


while 1

    % Send something
    %MACLayerReceiver(Receiver,Transmitter)
    Response = Receiver.Run;
    
end


end

