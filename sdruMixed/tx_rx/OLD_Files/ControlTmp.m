clear all;clc;
warning('off','all');
warning;


%% Tests
Node1.tx = TX;
Node1.tx.Compile;

Node1.rx = RX;
Node1.rx.Compile;

%Send something
Node1.tx.Message = 'Hello World';
% Node1.tx.Send;
% 
% %Received (Should just timeout)
% Node1.rx.Receive;

!rm messages.txt
!touch messages.txt

%% MAC Layer
try
    while true
        %Listen to spectrum
        !echo 'Now sensing' >> messages.txt
        if ~Node1.rx.Sense
            %Transmit
            !echo 'Spectrum Clean, now transmitting' >> messages.txt
            Node1.tx.Message = 'Hello World';
            Node1.tx.Send;
        else
            %Receive Stuff
            !echo 'Spectrum Occupied, now receiving' >> messages.txt
            Node1.rx.Receive
        end

    end
    
catch
    disp('Something broke :(');
end


