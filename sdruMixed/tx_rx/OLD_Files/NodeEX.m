function [ output_args ] = NodeEX

% Create Receiver
Receiver = PHYReceive;


% Run Node
message = MAC_RX(Receiver);



end

