function MACLayerTransmitter(Receiver,Transmitter,message)

% This function is called when the node wants to transmit something

% Sense spectrum and wait until it is unoccupied
for tries = 1:4 % try only so many times
    occupied = Receiver.Sense;
    if occupied
        MACLayerReceiver(Receiver,Transmitter);
    else
        break;
    end    
    if tries >=4
        fprintf('Spectrum Busy, try again later\n');
        return;
    end
end


% Spectrum clear send message
for tries = 1:4
    % Send message
    Transmitter.Run(message,10);
    % Listen for acknowledgement
    Response = Receiver.Run;
    if strcmp(Response,'ACK')
        break
    end
    if tries >= 4
        fprintf('No ACK received :(');
        return;
    end 
end


end

