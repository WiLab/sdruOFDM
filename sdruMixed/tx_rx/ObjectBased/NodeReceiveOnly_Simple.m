function NodeReceiveOnly_Simple

% Receiver = PHYReceive;
% Transmitter = PHYTransmit;
PHY = PHYLayer;

%coder.extrinsic('disp');
%while 1
for k = 1 : 10e6
    % Send something
    %lookingForACK = false;
    %MACLayerReceiver(Receiver,Transmitter, lookingForACK);
    %response = PHY.Receive;
    PHY.Receive;
    %disp(response);
    %fprintf('Got message\n');
end


end

