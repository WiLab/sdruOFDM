function [ Response ] = DLLayer(PHY)

% 0 = Call PHY Receiver
% 1 = Timeout
% 2 = Corrupt Message
% 3 = Message Reception Successfull
state = 0;

%coder.extrinsic('num2str','disp');

timeouts = 0; % Counter
maxTimeouts = 10;

% Message string holder
coder.varsize('Response', [1, 80], [0 1]);
Response = '';

% Run system
while 1
    % Process Messages
    switch state
        
        %Wait for message
        case 0
            if timeouts > maxTimeouts
                fprintf('DL| Max timeouts reached\n');
                Response = 'Timeout';
                break;
            end
            Response = PHY.Receive;
            fprintf('DL| Message=|%s|\n',Response);
            if strcmp(Response, 'Timeout')
                state = 1;
            elseif strcmp(Response,'CRC Error') || isempty(Response)
                state = 2;
            else
                state = 3;
            end
                    
        % Timeout occured    
        case 1
            disp('Timeout occured');
            timeouts = timeouts + 1;
            if timeouts > maxTimeouts
                fprintf('Max timeouts reached\n');
                Response = 'Timeout';
                break;
            end
            state = 0;%Get another message
            
        % Message corrupted    
        case 2
            fprintf('DL| Message corrupted\n');
            %timeouts = timeouts + 1;
            state = 0;%Get another message
            
        % Default: Message successfully received    
        case 3%otherwise
            %disp(['DL| MSG: ',Response])
            %disp(['DL| Timeouts: ',num2str(timeouts)])
            break;
    end
    
end



end

