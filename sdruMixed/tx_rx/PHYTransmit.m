% Send Messages
function PHYTransmit(...
    ObjSDRuTransmitter,...
    ObjSDRuReceiver,...
    inputPayloadMessage,...
    samplingFreq...
    )

DebugFlag = 0;

% Create message bits
[~,~, dataToTx, ~ ] = generateOFDMSignal_TX2(inputPayloadMessage,samplingFreq);% create shorter simpler function

% Run transmitter
if DebugFlag
    fprintf('PHY| Transmitting... pew! pew!\n');
    fprintf('PHY| TX Message: %s\n',inputPayloadMessage);
end


numFramesToTx = 10;
for framesTransmitted = 1:numFramesToTx
    step(ObjSDRuTransmitter, dataToTx);
    
    %if mod(framesTransmitted,60) == 0
        step(ObjSDRuReceiver);% clean up receive buffer, will be corrupted anyway
    %end
end

%obj.pSDRuTransmitter.reset;%stop transmitting?

end