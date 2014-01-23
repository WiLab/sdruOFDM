% Build Test
%compilesdru('testPHYReceive','mex');
compilesdru('testPHYTransmit','mex');

% Run Tests
%testPHYReceive_mex;
testPHYTransmit_mex;