% Be careful with this command!!!
%fprintf('Updating Files\n');
%!rsync -uzvr 130.215.23.67:~/git/traviscollins/sdruOFDM /home/sdruser/git/traviscollins/

load('../../sdruCalib/offsets.mat');

% Build Test
fprintf('Compiling code\n');
compilesdru('testPHYReceive','mex','-args',assert(isa(nodeTable,'struct')));
fprintf('Compiliation finished\n');

% Run Tests
testPHYReceive_mex(nodeTable);
