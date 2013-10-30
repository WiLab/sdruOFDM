function devices = findsdru(varargin)
%FINDSDRU Find USRP(R) radios connected to host computer and report status
%   A = FINDSDRU() returns a structure array, A, that contains the IP
%   address of all the USRP(R) devices connected to the host computer and
%   their status. The Status field of the structure A can have the
%   following values:
%
%     'Success':
%       Device is available.
%
%     'Not compatible': 
%       Device with incompatible firmware. To communicate with this device,
%       you must update the firmware to the version returned by the
%       getSDRuDriverVersion() function. See <a href =
%       "matlab:web([strrep(usrphelp, 'index.html', 'gs'), filesep,'btokkb2-1.html'])">USRP(R) Radio Firmware Update</a>
%       section of documentation for instructions on how to update the
%       firmware.
%
%     'Not responding': 
%       Device not responding. The device may not be attached to the
%       computer. There may not be a a device with the specified IP
%       address. Or, the subnet address of the host computer may not match
%       the subnet address of the device. Subnet address is the first three
%       fields of the IP address.
%
%     'Busy': 
%       Device is in use. The device is already owned by a block, block
%       dialog, or System object.
%
%     'Unknown error':
%       Unknown problem. Refer to <a href="matlab:web([strrep(usrphelp, 'index.html', 'gs'), filesep,'btojxzc.html'])">Troubleshooting</a> section of documentation
%       for possible solutions. 
%
%   A = FINDSDRU(IPADDRESS) returns a structure, A, that contains the
%   status of the USRP(R) device at IPADDRESS.
%
%   % Example:
%   %   Get IP address and status of all USRP(R) radios connected to the
%   %   host.
%   a = findsdru()
%
%   USRP is a trademark of National Instruments Corp.

%   Copyright 2011-2012 The MathWorks, Inc.

temp = char(randi([48 57], 1, 10));
objectID = ['SDRu_' temp];

baseStruct = struct('IPAddress', '', ...
  'Status', 'Unknown error');

if nargin > 0
  ipAddress = varargin{1};
  checkIPAddressFormat(ipAddress, 'IPADDRESS');
  devices = baseStruct;
  devices.IPAddress = ipAddress;
  devices.Status = 'Success';
else
  % Discover all USRP(R) devices
  rawDeviceList = getSDRuList();
  if strcmp(rawDeviceList, 'No devices found')
    devices = baseStruct;
    return
  else
    % Remove zeros from the end and use ',' as a token
    deviceList = [',' rawDeviceList(rawDeviceList~=0)];
    tokIdx = [strfind(deviceList, ',') length(deviceList)+1];
    devices = repmat(baseStruct, 1, length(tokIdx)-1);
    for p=1:length(tokIdx)-1
      devices(p).IPAddress = deviceList(tokIdx(p)+1:tokIdx(p+1)-1);
      devices(p).Status = 'Success';
    end
  end
end

if nargin > 1
  reportMethod = varargin{2};
else
  reportMethod = UsrpReportMethodEnumT.Warning;
end

for p=1:length(devices)
  ipAddress = devices(p).IPAddress;
  [driverHandle, errStatus1, errMsg1] = ...
    createDriver(uint8(ipAddress), BoardIdCapiEnumT.RxId, ...
    uint8(objectID));
  devices(p).Status = enum2str(errStatus1);
  
  reportSDRuStatus(errStatus1, errMsg1, ipAddress, reportMethod)
  
  if errStatus1 == UsrpErrorCapiEnumT.UsrpDriverSuccess
    devices(p).Status = enum2str(closeDataConnection(driverHandle));
  end
end
end

function strStatus = enum2str(enumStatus)
switch enumStatus
  case UsrpErrorCapiEnumT.UsrpDriverError
    strStatus = 'Unknown error';
  case UsrpErrorCapiEnumT.UsrpDriverSuccess
    strStatus = 'Success';
  case UsrpErrorCapiEnumT.UsrpDriverBusy
    strStatus = 'Busy';
  case UsrpErrorCapiEnumT.UsrpDriverNotResponding
    strStatus = 'Not responding';
  case UsrpErrorCapiEnumT.UsrpDriverNotCompatible
    strStatus = 'Not compatible';
  otherwise
    strStatus = 'Unknown error';
end
end
