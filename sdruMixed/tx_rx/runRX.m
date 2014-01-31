fprintf('Updating Files\n');
!sh /home/sdruser/git/traviscollins/copy_to_badwolf.sh

% Build Test
fprintf('Compiling code\n');
compilesdru('testPHYReceive','mex');
fprintf('Compiliation finished\n');

% Run Tests
testPHYReceive_mex;
