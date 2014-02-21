clear all; clc;

hostnames = {'k9','badwolf','thedoctor'};%,'tyco'};

Nodes = length(hostnames);

index = 0;

for i = 1:Nodes
    % Kill transmitter if running
    killFreqCalTX( hostnames{i} );
    
    % Start Transmitter on a given node
    disp(['Starting transmitter on: ',hostnames{i}]);
    runFreqCalTX( hostnames{i} );
    
    % Cycle through reception nodes
    for j = 1:Nodes
        
        % Cannot calibrate to own radio :)
        if i==j
           continue; 
        end
        
        % Measure offset at give node
        disp(['Starting receiver on: ',hostnames{j}]);
        offset = runFreqCalRX( hostnames{j} );        
        
        % Save measurement
        index = index + 1;
        nodeTable(index).Transmitter = hostnames{i};
        nodeTable(index).Receiver = hostnames{j};
        nodeTable(index).Offset = offset;

    end
    
    % Kill transmitter
    disp(['Stopping transmitter on: ',hostnames{i}]);
    killFreqCalTX( hostnames{i} );
    
end


% Print out offsets
for i=1:length(nodeTable)
    fprintf('###Pair %d###\n',i);
    disp(nodeTable(i));
end

% Publish for other scripts to use
save('offsets.mat','nodeTable');



 