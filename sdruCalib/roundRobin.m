


hostnames = {'k9','badwolf','thedoctor','tyco'};

Nodes = length(hostnames);

node = cell(Nodes,Nodes-1);

for i = 1:Nodes
    % Start Transmitter on a given node
    runFreqCalTX( hostnames{i} );
    
    % Cycle through reception nodes
    for j = 1:Nodes
        
        if i==j
           continue; 
        end
        
        % Measure offset at give node
        offset = runFreqCalRX( hostnames{j} );        
        
        % Save measurement
        node{j,i} = struct('Transmitter',hostnames{i},'Receiver',hostname{j},'Offset',offset);
    end
    
    % Kill transmitter
    killFreqCalTX( hostnames{i} );
    
end
 