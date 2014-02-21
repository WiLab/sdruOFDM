 function offset = runFreqCalRX( hostname )

% Run Receiver
command =['ssh root@monadnock.ece.wpi.edu tb -dest ',hostname,' -act runFreqCalRX -u traviscollins'];
[~,output] = system(command);

% Get offset val
key = 'True offset: ';
loc = strfind(output,key);
offset_str = output(loc+length(key):end);
offset = str2double(offset_str);



end