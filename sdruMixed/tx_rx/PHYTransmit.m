% Send Messages
function PHYTransmit(...
    ObjSDRuTransmitter,...
    ObjSDRuReceiver,...
    inputPayloadMessage,...
    samplingFreq...
    )

DebugFlag = 0;

%% Create message bits
% The output needs to be duplicated to long vectors to help prevent
% Underflow for the USRP
[~,~, dataToTx, ~ ] = generateOFDMSignal_TX2(inputPayloadMessage,samplingFreq);% 30 Dupe frames created (NOTE! author shouldcreate shorter simpler function)

%% Run transmitter
if DebugFlag
    fprintf('PHY| Transmitting... pew! pew!\n');
    fprintf('PHY| TX Message: %s\n',inputPayloadMessage);
end

numFramesToTx = 10;%increasing value will help receiver
% This should be longer to help transmit over periods when the RX is
% cleaning its buffer

for framesTransmitted = 1:numFramesToTx
    step(ObjSDRuTransmitter, dataToTx);
    
    %if mod(framesTransmitted,60) == 0
    step(ObjSDRuReceiver);% Call used to prevent Overflow.  Essentially will clean up receive buffer, will be filled with crosstalk frames
    %end
end

%obj.pSDRuTransmitter.reset;%stop transmitting?

end