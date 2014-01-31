function [ Response, previousMessage ] = DLLayer(...
    ObjAGC,...           %Objects
    ObjSDRuReceiver,...
    ObjDetect,...
    ObjPreambleDemod,...
    ObjDataDemod,...
    estimate,...         %Structs
    tx,...
    timeoutDuration,...  %Values/Vectors
    messageBits,...
    previousMessage...
    )


DebugFlag = 0;

% 0 = Call PHY Receiver
% 1 = Timeout
% 2 = Corrupt Message
% 3 = Message Reception Successfull
% Duplicates are checked at the last stage
state = 0;% Initial state
timeouts = 0; % Counter
maxTimeouts = 4;

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
                if DebugFlag;fprintf('DL| Max timeouts reached\n');end;
                Response = 'Timeout';
                break;
            end
            
            % Call Physical Layer
            Response = PHYReceive(...
                ObjAGC,...           %Objects
                ObjSDRuReceiver,...
                ObjDetect,...
                ObjPreambleDemod,...
                ObjDataDemod,...
                estimate,...         %Structs
                tx,...
                timeoutDuration,...  %Values/Vectors
                messageBits...
                );
            
            % Choose next state
            if DebugFlag;fprintf('DL| Message=|%s|\n',Response(1:end-1));end
            if strcmp(Response, 'Timeout')
                state = 1;
            elseif strcmp(Response,'CRC Error') || isempty(Response)
                state = 2;
            else% Successfully decoded
                state = 3;
            end
                    
        % Timeout occured    
        case 1
            if DebugFlag;fprintf('DL| Timeout occured\n');end
            timeouts = timeouts + 1;
            if timeouts > maxTimeouts
                %if DebugFlag;fprintf('DL| Max timeouts reached\n');end
                fprintf('DL| Max timeouts reached\n');
                Response = 'Timeout';
                break;
            end
            state = 0;%Get another message
            
        % Message corrupted    
        case 2
            if DebugFlag;fprintf('DL| Message corrupted\n');end
            timeouts = timeouts + 0.01;
            state = 0;%Get another message
            
        % Default: Message successfully received    
        case 3%otherwise
            %disp(['DL| MSG: ',Response])
            %disp(['DL| Timeouts: ',num2str(timeouts)])
            
            % Final Duplication check
            if strcmp(previousMessage, Response)%Dupe
                %if DebugFlag;fprintf('DL| Duplicate Message\n');end
                fprintf('DL| Duplicate Message\n');
                previousMessage = Response;%Update history for next iteration
                Response = 'Duplicate';%Tell upper layers duplicate
            else%No Dupe
                previousMessage = Response;%Update history for next iteration
                Response = Response(1:end-1);%Remove identifer key
            end
            
            break;
    end
    
end



end

