% Run receiver with function calls
[ tx, offsetCompensationValue, numFrames, useScopes, printReceivedData ] = setupSDRuReceiver( true );

messagesToReceive = 1;

maxTimeouts = 4;%Maximum timeouts before quit

messages = cell(1);
messages{1} = 'runRx';

% Run system
disp('SYSTEM: Receiver will run until message has been received correctly');
timeouts = 0; %Timeout counter

while 1
    messages = getMessagesSDRu( messagesToReceive, tx, offsetCompensationValue, numFrames, useScopes, printReceivedData );
   
    disp('Lower layer message:');
    disp(messages{1});
   
   if strcmp( messages{1}, 'Timeout' )
       continue;
   else
       break
   end
   
end

disp('Completed successfully');

