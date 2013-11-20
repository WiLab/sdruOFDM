function [ messages ] = getMessagesSDRu( messagesToReceive, tx, offsetCompensationValue, numFrames, useScopes, printReceivedData )

useCodegen = true;

messages = cell(messagesToReceive,1);

for messageNum = 1 : messagesToReceive
    % Run receiver
    disp('Starting receiver!');
    tic;
    if useCodegen
        [recoveredMessage, err, frameBER, estimate] = receiveOFDM80211a_sdru_mex( tx, offsetCompensationValue, numFrames, useScopes, printReceivedData );
    else
        [recoveredMessage, err, frameBER, estimate] = receiveOFDM80211a_sdru( tx, offsetCompensationValue, numFrames, useScopes, printReceivedData );
    end
    toc;
    
    messages{messageNum} = recoveredMessage;
end



end

