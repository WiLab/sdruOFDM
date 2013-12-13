function [ Response ] = messageProcessor(tx, offsetCompensationValue, numFrames, useScopes, printReceivedData)

messagesToReceive = 1;
timeouts = 0; % Counter
maxTimeouts = 2;

messages = cell(1);
messages{1} = 'runRx';

Response = 'Error';% Default response is something strange happens

% Run system
while 1
    % Process Messages
    switch messages{1}
        case 'runRx'
            messages = getMessagesSDRu( messagesToReceive, tx, offsetCompensationValue, numFrames, useScopes, printReceivedData );
            
        case 'Timeout';
            disp('Timeout occured');
            timeouts = timeouts + 1;
            if timeouts > maxTimeouts
                disp('Max timeouts reached');
                Response = 'Timeout';
                break;
            end
            messages = cell(1);
            messages{1} = 'runRx';
            
            
        case 'CRC Error';
            disp('Message corrupted');
            messages = cell(1);
            messages{1} = 'runRx';
            
        otherwise
            disp(['MSG: ',messages{1}])
            disp(['Timeouts: ',num2str(timeouts)])
            Response = messages{1};
            break;
    end
    
end



end

