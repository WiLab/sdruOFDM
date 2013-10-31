function output = commblkusrp(block, cmd, varargin)

%   Copyright 2010-2012 The MathWorks, Inc.

% block must be set immediately in the block mask initialization commands 
% edit box!  so it is passed in as an arg now.  see g679873.
% block = gcb;
%
% calls from mask init:
%  {blk, 'maskDisplay'}, 
%  {blk, 'reconfigure'}
%
% calls from ddg code:
%   ddg now calls into UsrpMaskMapi() directly
%
if nargin >= 3
    USRP_IP = varargin{1};
else
    USRP_IP = eval(get_param(block, 'USRP2_IP'));
end

rxtx = get_param(block, 'rxtx');

hasPort(1) = ~strcmp(get_param(block, 'centerFrequencySrc'), 'Dialog');
hasPort(2) = ~strcmp(get_param(block, 'loOffsetSrc'), 'Dialog');
hasPort(3) = ~strcmp(get_param(block, 'gainSrc'), 'Dialog');
hasPort(4) = ~strcmp(get_param(block, 'decimInterpSrc'), 'Dialog');

switch cmd
    % -------------- called from block mask initialization function -----------------
    case 'maskDisplay'
        switch (rxtx)
            case 'rx'
                maskText = USRP_IP;
                output = sprintf('fprintf(''SDRu\\nReceiver\\n%s'');\n', maskText);
                index = 1;
                if hasPort(1)
                    output = sprintf('%s%s%d%s\n', output, 'port_label(''input'', ', index, ', ''Fc'');');
                    index  = index + 1;
                end
                if hasPort(2)
                    output = sprintf('%s%s%d%s\n', output, 'port_label(''input'', ', index, ', ''LO Offset'');');
                    index  = index + 1;
                end
                if hasPort(3)
                    output = sprintf('%s%s%d%s\n', output, 'port_label(''input'', ', index, ', ''Gain'');');
                    index  = index + 1;
                end
                if hasPort(4)
                    output = sprintf('%s%s%d%s\n', output, 'port_label(''input'', ', index, ', ''Decim'');');
                end
                output = sprintf('%s%s\n', output, 'port_label(''output'', 1, ''Data'');');
                output = sprintf('%s%s\n', output, 'port_label(''output'', 2, ''Data Len'');');
                overrunUnderrunPort = get_param(block, 'overrunUnderrunPort');
                if strcmp(overrunUnderrunPort, 'on');
                    output = sprintf('%s%s\n', output, 'port_label(''output'', 3, ''Overrun'');');
                end
                
            case 'tx'
                maskText = USRP_IP;
                output = sprintf('fprintf(''SDRu\\nTransmitter\\n%s'');\n', maskText);
                index = 1;
                output = sprintf('%s%s%d%s\n', output, 'port_label(''input'', ', index, ', ''Data'');');
                index  = index + 1;
                if sum(hasPort)
                    if hasPort(1)
                        output = sprintf('%s%s%d%s\n', output, 'port_label(''input'', ', index, ', ''Fc'');');
                        index  = index + 1;
                    end
                    if hasPort(2)
                        output = sprintf('%s%s%d%s\n', output, 'port_label(''input'', ', index, ', ''LO Offset'');');
                        index  = index + 1;
                    end
                    if hasPort(3)
                        output = sprintf('%s%s%d%s\n', output, 'port_label(''input'', ', index, ', ''Gain'');');
                        index  = index + 1;
                    end
                    if hasPort(4)
                        output = sprintf('%s%s%d%s\n', output, 'port_label(''input'', ', index, ', ''Interp'');');
                    end
                end
                overrunUnderrunPort = get_param(block, 'overrunUnderrunPort');
                if strcmp(overrunUnderrunPort, 'on');
                    output = sprintf('%s%s\n', output, 'port_label(''output'', 1, ''Underrun'');');
                end
        end
        
    case 'reconfigure' % reconfigure the ports
        showHidePorts(block, rxtx, hasPort);
        output = '';
        
    case 'setDerivedParams'
        switch (rxtx)
            case 'rx'
                set_param(block, 'USRP2_IP_NUM', mat2str(double(USRP_IP)));
                odt = get_param(block, 'outputDatatype');
                switch(odt)
                    case 'int16',             odtGainStr = 'int16(1)';
                    case 'single',            odtGainStr = 'single(1/(2^15-1))';
                    case 'double',            odtGainStr = 'double(1/(2^15-1))';
                end
                set_param([block '/Gain'], 'Gain', odtGainStr);
                set_param([block '/Gain'], 'OutDataTypeStr', odt);
                
            case 'tx'
                % scaling is handled inside the driver for tx
                set_param(block, 'USRP2_IP_NUM', mat2str(double(USRP_IP)));
        end

    otherwise
        assert(false, 'Illegal command');
end

end

function showHidePorts(block, rxtx, hasPort)

if (strcmp(rxtx,'rx'))
    portNumber = 1;
else
    portNumber = 2;
end

values = {'centerFrequency', 'loOffset', 'gain', 'decimInterp'};

for i=1:4
    blockName = sprintf('port_%d',i);
    oldBlock = [block '/' blockName];
    orient  = get_param(oldBlock, 'Orientation');
    pos     = get_param(oldBlock, 'Position');
    if hasPort(i)
         newBlock = sprintf('built-in/Inport');
    else
         newBlock = sprintf('built-in/Constant');
    end
    oldBlockType = get_param(oldBlock, 'BlockType');
    newBlockType = get_param(newBlock, 'BlockType');
    if ~strcmp(oldBlockType, newBlockType)
        delete_block(oldBlock);
        add_block(newBlock, oldBlock, ...
                    'Name',        blockName, ...
                    'Orientation', orient, ...
                    'Position',    pos);
    end
    if hasPort(i) % Number the ports consecutively
        set_param(oldBlock, 'Port', sprintf('%d', portNumber));
        portNumber = portNumber + 1;
    end
    if ~hasPort(i) % Set the constant parameters
        set_param(oldBlock, 'Value', values{i});
    end
end
% Do we have an overrun or underrun port?

overrunUnderrunPort = get_param(block, 'overrunUnderrunPort');
oldBlock = [block '/overrunUnderrun'];
if strcmp(overrunUnderrunPort, 'on');
    newBlock = sprintf('built-in/Outport');
else
    newBlock = sprintf('built-in/Terminator');
end
oldBlockType = get_param(oldBlock, 'BlockType');
newBlockType = get_param(newBlock, 'BlockType');
if ~strcmp(oldBlockType, newBlockType)
    orient  = get_param(oldBlock, 'Orientation');
    pos     = get_param(oldBlock, 'Position');
    delete_block(oldBlock);
    add_block(newBlock, oldBlock, ...
        'Name',        'overrunUnderrun', ...
        'Orientation', orient, ...
        'Position',    pos);
end

end

% EOF
