classdef SDRuBase< handle
%SDRuBase Base class for SDRu receiver and transmitter

 
%   Copyright 2010-2012 The MathWorks, Inc.

    methods
        function out=SDRuBase
            %SDRuBase Base class for SDRu receiver and transmitter
        end

    end
    methods (Abstract)
    end
    properties
        %ActualCenterFrequency Actual center frequency in Hz
        %   Report the actual center frequency of the daughterboard. Desired and
        %   actual center frequency can be slightly different due to
        %   quantization. This property is read-only.
        ActualCenterFrequency;

        %ActualGain Actual gain in dB
        %   Report the actual gain of the daughterboard. Desired and actual gain
        %   can be slightly different due to quantization. This property is
        %   read-only.
        ActualGain;

        %ActualLocalOscillatorOffset Actual local oscillator offset in Hz
        %   Report the actual local oscillator offset of the daughterboard.
        %   Desired and actual offset can be slightly different due to
        %   quantization. This property is read-only.
        ActualLocalOscillatorOffset;

        %CenterFrequency Desired center frequency in Hz
        %   Specify the desired center frequency as a double precision
        %   nonnegative scalar. The default is 2.45 GHz. The valid range of this
        %   property depends on the RF daughterboard of the USRP(R) device. This
        %   property applies when you set the CenterFrequencySource to
        %   'Property'. This property is tunable.
        CenterFrequency;

        %CenterFrequencySource Source of center frequency
        %   Specify the source of the center frequency as one of 'Property' |
        %   'Input port'. The default is 'Property'. Set CenterFrequencySource to
        %   'Input port' to specify the center frequency value via an input to
        %   the step method. Set CenterFrequencySource to 'Property' to specify
        %   the center frequency value via the CenterFrequency property.
        CenterFrequencySource;

        %EnableBurstMode Ensure a set of frames without overrun or underrun
        %   Set to true, this parameter will guarantee a set of contiguous frames
        %   without an overrun or underrun to the radio.  This setting can help 
        %   simulate models that cannot run in real time.  When enabled, specify 
        %   the desired amount of contiguous data using the 'NumFramesInBurst' 
        %   property.
        EnableBurstMode;

        %Gain    Desired RF front-end gain in dB
        %   Specify the gain that the object applies to the USRP(R) device RF
        %   front-end as a double scalar using decibels. The default is 8. The
        %   valid range of this property depends on the RF daughterboard of the
        %   USRP(R) device. This property applies when you set the GainSource to
        %   'Property'. This property is tunable.
        Gain;

        %GainSource Source of gain
        %   Specify the source of the gain as one of 'Property' | 'Input port'.
        %   The default is 'Property'. Set GainSource to 'Input port' to specify
        %   the gain value via an input to the step method. Set GainSource to
        %   'Property' to specify the gain value via the Gain property.
        GainSource;

        %IPAddress IP address of the USRP(R) device
        %   Specify the logical network location of the USRP(R) device as a
        %   dotted-quad character array. The default is '192.168.10.2'. You can find
        %   all connected USRP(R) radios with the findsdru function.
        %
        %   See also findsdru, probesdru.
        IPAddress;

        %LocalOscillatorOffset Desired local oscillator offset in Hz
        %   Specify the desired local oscillator offset frequency as a double
        %   precision scalar. The default is 0 Hz. The valid range of this
        %   property depends on the RF daughterboard of the USRP(R) device. This
        %   property applies when you set the LocalOscillatorOffsetSource to
        %   'Property'. This property is tunable.
        LocalOscillatorOffset;

        %LocalOscillatorOffsetSource Source of local oscillator offset
        %   Specify the source of the local oscillator offset as one of
        %   'Property' | 'Input port'. The default is 'Property'. Set
        %   LocalOscillatorOffsetSource to 'Input port' to specify the local
        %   oscillator offset value via an input to the step method. Set
        %   LocalOscillatorOffsetSource to 'Property' to specify the local
        %   oscillator offset value via the LocalOscillatorOffset property.
        LocalOscillatorOffsetSource;

        %NumFramesInBurst Number of frames in contiguous burst
        %   This property is valid when 'EnableBurstMode' is set.
        NumFramesInBurst;

        pActualCenterFrequency;

        pActualCenterFrequencyStale;

        pActualGain;

        pActualGainStale;

        pActualLocalOscillatorOffset;

        pBoardInfo;

        pBoardInfoStale;

        pBoardInfoStatus;

        pConnected;

        pDriverHandle;

    end
end
