% Run receiver with function calls
[ tx, offsetCompensationValue, numFrames, useScopes, printReceivedData ] = setupSDRuReceiver( true );

messagesToReceive = 1;

messages = cell(1);
messages{1} = 'runRx';

% Run system
timeouts = 0; maxTimeouts = 4;
%for i = 1 : 10
while 1
    % Process Messages
    switch messages{messageNum}
        case 'runRx'
            [ messages ] = getMessagesSDRu( messagesToReceive, tx, offsetCompensationValue, numFrames, useScopes, printReceivedData );
            
        case 'Timeout';
            disp('Timeout occured');
            timeouts = timeouts + 1;
            if timeouts > maxTimeouts
                disp('Max timeouts reached');
                break;
            end
            messages = cell(1);
            messages{1} = 'runRx';
            
            
        case 'CRC Error';
            disp('Message corrupted');
            messages = cell(1);
            messages{1} = 'runRx';
            
        otherwise
            disp(['MSG: ',messages{messageNum}])
            break;
    end
    
end
