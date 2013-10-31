function reportSDRuStatus(errStatus, errMsg, ipAddress, reportMethod)
%reportSDRuStatus SDRu status reporter
%   reportSDRuStatus(STATUS,MSG,IP,METHOD) reports the SDRu status based on
%   the STATUS input. STATUS is a UsrpErrorCapiEnumT type. IP is the IP
%   address of the USRP(R) radio. METHOD is a UsrpReportMethodEnumT type and
%   can be Warning, Error , or None.
%
%   USRP(R) is a trademark of National Instruments Corp.

%   Copyright 2012 The MathWorks, Inc.

%#codegen

  coder.internal.errorIf(...
    ~isa(errStatus, 'UsrpErrorCapiEnumT') || ~isscalar(errStatus), ...
    'sdru:reportSDRuStatus:InvalidErrorStatus')

  coder.internal.errorIf(~ischar(errMsg), ...
    'sdru:reportSDRuStatus:InvalidErrorMessage', errMsg);

  coder.internal.errorIf(~ischar(ipAddress), ...
    'sdru:reportSDRuStatus:InvalidIPAddress');
  coder.internal.errorIf(~isrow(ipAddress), ...
    'sdru:reportSDRuStatus:InvalidIPAddress');

  coder.internal.errorIf(...
    ~isa(reportMethod, 'UsrpReportMethodEnumT') || ~isscalar(reportMethod), ...
    'sdru:reportSDRuStatus:InvalidReportMethod')

  switch errStatus
    case UsrpErrorCapiEnumT.UsrpDriverNotCompatible
      msgID = 'sdru:reportSDRuStatus:NotCompatible';
      switch reportMethod
        case UsrpReportMethodEnumT.Warning
          coder.internal.warning(msgID, ipAddress, getSDRuDriverVersion);
        case UsrpReportMethodEnumT.Error
          if isempty(coder.target)
            coder.internal.errorIf(...
              errStatus == UsrpErrorCapiEnumT.UsrpDriverNotCompatible, ...
              msgID, ipAddress, getSDRuDriverVersion);
          else
            coder.internal.errorIf(...
              errStatus == UsrpErrorCapiEnumT.UsrpDriverNotCompatible, ...
              msgID, ipAddress, 'returned by ''getSDRuDriverVersion'' function');
          end
      end
    case UsrpErrorCapiEnumT.UsrpDriverNotResponding
      msgID = 'sdru:reportSDRuStatus:NotResponding';
      switch reportMethod
        case UsrpReportMethodEnumT.Warning
          coder.internal.warning(msgID, ipAddress);
        case UsrpReportMethodEnumT.Error
          coder.internal.errorIf(...
            errStatus == UsrpErrorCapiEnumT.UsrpDriverNotResponding, ...
            msgID, ipAddress);
      end
    case UsrpErrorCapiEnumT.UsrpDriverBusy
      msgID = 'sdru:reportSDRuStatus:Busy';
      switch reportMethod
        case UsrpReportMethodEnumT.Warning
          coder.internal.warning(msgID, ipAddress);
        case UsrpReportMethodEnumT.Error
          coder.internal.errorIf(...
            errStatus == UsrpErrorCapiEnumT.UsrpDriverBusy, ...
            msgID, ipAddress);
      end
    case UsrpErrorCapiEnumT.UsrpDriverError
      msgID = 'sdru:reportSDRuStatus:UnknownStatus';
      switch reportMethod
        case UsrpReportMethodEnumT.Warning
          coder.internal.warning(msgID)
        case UsrpReportMethodEnumT.Error
          coder.internal.errorIf(...
            errStatus == UsrpErrorCapiEnumT.UsrpDriverError, msgID)
      end
  end
end
