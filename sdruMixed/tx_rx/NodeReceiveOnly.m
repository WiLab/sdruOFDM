function NodeReceiveOnly

Receiver = PHYReceive;
%Transmitter = PHYTransmit;


while 1

    % Send something
    %MACLayerReceiver(Receiver,Transmitter)
    Receiver.Run;
    
end


end

