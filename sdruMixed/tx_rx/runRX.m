% Be careful with this command!!!
fprintf('Updating Files\n');
!rsync -uzvr 130.215.23.67:~/git/traviscollins/sdruOFDM /home/sdruser/git/traviscollins/
!rm monet_hat.jpg

% Build Test
fprintf('Compiling code\n');
compilesdru('testPHYReceive','mex');
fprintf('Compiliation finished\n');

% Run Tests
testPHYReceive_mex;
