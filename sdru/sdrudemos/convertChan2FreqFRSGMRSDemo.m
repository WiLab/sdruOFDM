function fc = convertChan2FreqFRSGMRSDemo(channel)
% Map integer channel number to FRS/GMRS center frequencies
%
%  Channel   Frequency   Service
%              (MHz)
%     1       462.5625    GMRS/FRS
%     2       462.5875    GMRS/FRS
%     3       462.6125    GMRS/FRS
%     4       462.6375    GMRS/FRS
%     5       462.6625    GMRS/FRS
%     6       462.6875    GMRS/FRS
%     7       462.7125    GMRS/FRS
%     8       467.5625    FRS
%     9       467.5875    FRS
%    10       467.6125    FRS
%    11       467.6375    FRS
%    12       467.6625    FRS
%    13       467.6875    FRS
%    14       467.7125    FRS

%   Copyright 2011-2012 The MathWorks, Inc.

%#codegen

channel = double(channel);
if channel <= 7
    fc = 462562500 + 25000*(channel-1);  % GMRS/FRS
elseif channel <= 14
    fc = 467562500 + 25000*(channel-8);       % FRS
else
    fc = 462562500;
end
