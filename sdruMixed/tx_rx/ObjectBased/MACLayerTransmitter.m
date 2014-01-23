function MACLayerTransmitter(PHY,message)

% This function is called when the node wants to transmit something

% % Sense spectrum and wait until it is unoccupied
% for tries = 1:4 % try only so many times
%     occupied = PHY.Sense;
%     if occupied
%         fprintf('MAC| Spectrum occupied, listening...\n');
%         %Recover signal and/or wait
%         lookingForACK = false;
%         MACLayerReceiver(PHY,lookingForACK);
%     else% Yay we can transmit now
%         break;
%     end    
%     if tries >=4
%         fprintf('MAC| Spectrum Busy, try again later\n');
%         return;
%     end
% end


% Spectrum clear, send message
for tries = 1:4
    % Send message
    PHY.Transmit(message,1e3);
    PHY.Wait(2);
    % Listen for acknowledgement
    fprintf('###########################################\n');
    fprintf('MAC| Transmission finished, waiting for ACK\n');
    lookingForACK = true;
    Response = MACLayerReceiver(PHY, lookingForACK);
    if strcmp(Response,'ACK')
        fprintf('MAC| Got ACK\n');
        break
    else
        fprintf('MAC| Retransmitting message\n');
    end
    if tries >= 4
        fprintf('MAC| No ACK received :(\n');
        return;
    end 
end


end

