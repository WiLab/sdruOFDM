% Be careful with this command!!!
%fprintf('Updating Files\n');
%!rsync -uzvr 130.215.23.67:~/git/traviscollins/sdruOFDM /home/sdruser/git/traviscollins/

%% Determine Node# and get offsets for other users (all from roundRobin.m)
load('../../sdruCalib/offsets.mat');
[~,nodeName]=system('hostname');        
nodeName = nodeName(1:end-1);%remove newline character
for k=1:length(hostnames),if strcmp(nodeName,hostnames{k}),break,end,end;%get node number from hostname
nodeNum = k;
disp(['Node number: ',num2str(k)]);

% Rows represent receiver offsets for a single node from many transmitters
offsets = nodeTable_offsets(nodeNum,:);


%% Run receiver

% Build Test
fprintf('Compiling code\n');
compilesdru('testPHYReceive','mex','-args','{offsets,nodeNum}');
fprintf('Compiliation finished\n');
break;
% Run Tests
testPHYReceive_mex(offsets, nodeNum);
