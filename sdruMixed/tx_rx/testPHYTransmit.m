function testPHYTransmit



[...
    ObjAGC,...           %Objects
    ObjSDRuReceiver,...
    ObjSDRuTransmitter,...
    ObjDetect,...
    ObjPreambleDemod,...
    ObjDataDemod,...
    estimate,...         %Structs
    tx,...
    timeoutDuration,...  %Values/Vectors
    messageBits...
    ] = CreateTXRX;



% Previous Message string holder
coder.varsize('previousMessage', [1, 80], [0 1]);
previousMessage = '';
message = char(zeros(1,70));

% Get file to tx
data = fileSource2('/Users/travis/Git/sdruOFDM/sdruMixed/tx_rx/monet.jpg');
packetBits = 70;
% Pad data
if mod(length(data),packetBits)>0
   data = [data,'END',repmat('-',1,packetBits- 3 - mod(length(data),70))]; 
end


for packet = 1:packetBits:length(data)

    % Pull out message
    message(1:70) = data(packet:packet+packetBits-1);
    
    %message = ['Random Message',char(96+run)];%Create different messages each times
    %message = ['Random Message|Random Message|Random Message|Random Message|Random Message'];%Dont create different messages each times
    
    previousMessage = MACLayerTransmitter(...
        ObjAGC,...           %Objects
        ObjSDRuReceiver,...
        ObjSDRuTransmitter,...
        ObjDetect,...
        ObjPreambleDemod,...
        ObjDataDemod,...
        estimate,...         %Structs
        tx,...
        timeoutDuration,...  %Values/Vectors
        messageBits,...
        message(1:70),...
        previousMessage...
        );
    
    %Wait some time
    waitTime = 2e2; % Calculated in seconds buts thats far from realistic 
    fprintf('TOP| DONE Iteration: Waiting some time between actions\n');
    Wait(ObjSDRuReceiver,tx.samplingFreq,waitTime);
    
    
end


end