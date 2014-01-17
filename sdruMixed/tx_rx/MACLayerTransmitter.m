function MACLayerTransmitter(Receiver,Transmitter,message)

% This function is called when the node wants to transmit something

% Sense spectrum and wait until it is unoccupied
for tries = 1:4 % try only so many times
    occupied = Receiver.Sense;
    if occupied
        fprintf('MAC| Spectrum occupied, listening...\n');
        %Recover signal and/or wait
        lookingForACK = false;
        MACLayerReceiver(Receiver,Transmitter,lookingForACK);
    else% Yay we can transmit now
        break;
    end    
    if tries >=4
        fprintf('MAC| Spectrum Busy, try again later\n');
        return;
    end
end


% Spectrum clear, send message
for tries = 1:4
    % Send message
    Transmitter.Run(message,1e4);
    % Listen for acknowledgement
    %Response = Receiver.Run;
    fprintf('MAC| Transmission finished, waiting for ACK\n');
    lookingForACK = true;
    Response = MACLayerReceiver(Receiver,Transmitter, lookingForACK);
    if strcmp(Response,'ACK')
        fprintf('MAC| Got ACK\n');
        break
    else
        pause(4);
        fprintf('MAC| Retransmitting message\n');
    end
    if tries >= 4
        fprintf('MAC| No ACK received :(\n');
        return;
    end 
end


end

