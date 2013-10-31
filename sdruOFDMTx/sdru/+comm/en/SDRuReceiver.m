classdef SDRuReceiver< handle
%SDRuReceiver Receive data from USRP(R) device
%   H = comm.SDRuReceiver creates an SDRu receiver System object, H, that
%   receives data from the Universal Software Radio Peripheral(R)
%   (USRP(R)). The SDRu receiver object supports communication between
%   MATLAB(R) and a USRP(R) board, allowing simulation and development of
%   various software-defined radio (SDR) applications. The SDRu receiver
%   object enables communication with a USRP(R) board on the same gigabit
%   Ethernet subnetwork. This object receives signal and control data from
%   a USRP(R) board using Universal Hardware Driver (UHD(TM)). Although the
%   SDRu receiver System object receives data from a USRP(R) board, the
%   object acts as a signal source that outputs a column vector signal of
%   fixed length.
%
%   H = comm.SDRuReceiver(Name,Value) creates an SDRu receiver object, H,
%   with the specified property Name set to the specified Value. You can
%   specify additional name-value pair arguments in any order as
%   (Name1,Value1,...,NameN,ValueN).
%
%   H = comm.SDRuReceiver(ADDRESS,Name,Value) creates an SDRu receiver
%   object, H. This object has the IPAddress property set to ADDRESS and
%   the other specified properties set to the specified values.
%
%   Step method syntax:
%
%   [Y,LEN] = step(H) receives signal and control data from a USRP(R)
%   board using Universal Hardware Driver (UHD(TM)) packets. Output signal, Y,
%   is a column vector of complex double precision, single precision or
%   16-bit integer values and LEN is the actual data length.
%
%   [Y,LEN,OVER] = step(H) outputs the overrun flag, OVER, when the
%   OverrunOutputPort is set to true. Output, OVER, is a scalar logical
%   value. If one or more packets is dropped, then this output port has a
%   value of true.
%
%   Y = step(H,FC) configures the USRP(R) board to receive at the center
%   frequency, FC, when the CenterFrequencySource property is set to 'Input
%   port'. Center frequency, FC, must be a double precision scalar.
%
%   Y = step(H,LO) configures the USRP(R) board to apply a local
%   oscillator offset , LO, when the LocalOscillatorOffsetSource property
%   is set to 'Input port'. The offset, LO, must be a double precision
%   scalar.
%
%   Y = step(H,GAIN) configures the USRP(R) board to receive using a gain
%   specified by the input, GAIN, when the GainSource property is set to
%   'Input port'. Input, GAIN, must be a double precision scalar.
%
%   Y = step(H,DECIM) configures the USRP(R) board to receive using a
%   decimation factor, DECIM, when the DecimationFactorSource property is
%   set to 'Input port'. Input, DECIM, must be an integer scalar.
%
%   You can combine optional input arguments when you set their enabling
%   properties. Optional inputs must be listed in the same order as the
%   order of the enabling properties. For example,
%
%   Y = step(H,FC,LO,GAIN,DECIM)   
%
%   SDRuReceiver methods:
%
%   step     - Receive data from the USRP(R) board (see above)
%   info     - Obtain USRP(R) board information
%   release  - Allow property value and input characteristics changes
%   isLocked - Locked status (logical)
%
%   SDRuReceiver properties:
%
%   IPAddress                   - IP address of the USRP(R) device
%   CenterFrequencySource       - Source of center frequency
%   CenterFrequency             - Desired center frequency in Hz
%   ActualCenterFrequency       - Actual center frequency in Hz
%   LocalOscillatorOffsetSource - Source of local oscillator offset
%   LocalOscillatorOffset       - Desired local oscillator offset in Hz
%   ActualLocalOscillatorOffset - Actual local oscillator offset in Hz
%   GainSource                  - Source of gain
%   Gain                        - Desired RF front-end gain in dB
%   ActualGain                  - Actual RF front-end gain in dB
%   DecimationFactorSource      - Source of decimation factor
%   DecimationFactor            - Desired decimation factor
%   ActualDecimationFactor      - Actual decimation factor
%   OverrunOutputPort           - Output overrun flag
%   SampleRate                  - Sample rate in Hz
%   OutputDataType              - Data type of output
%   FrameLength                 - Frame length
%   EnableBurstMode             - Ensure a set of frames without overrun
%   NumFramesInBurst            - Number of frames in contiguous burst
%
%   % Example: 
%   %   Configure a USRP(R) board with an IP address of 192.168.10.2 to 
%   %   receive at 2.2 GHz with a decimation factor of 256. Save the
%   %   data using a signal logger System object.
%
%   hSDRu = comm.SDRuReceiver('192.168.10.2', ...
%             'CenterFrequency', 2.2e9, ...
%             'DecimationFactor', 256);
%   hLogger = dsp.SignalSink;
%   for counter = 1:20
%     data = step(hSDRu);
%     step(hLogger, data);
%   end
%
%   See also comm.SDRuTransmitter.
%
%   Universal Software Radio Peripheral and USRP are a trademark of
%   National Instruments Corp. 

 
%   Copyright 2010-2012 The MathWorks, Inc.

    methods
        function out=SDRuReceiver
            %SDRuReceiver Receive data from USRP(R) device
            %   H = comm.SDRuReceiver creates an SDRu receiver System object, H, that
            %   receives data from the Universal Software Radio Peripheral(R)
            %   (USRP(R)). The SDRu receiver object supports communication between
            %   MATLAB(R) and a USRP(R) board, allowing simulation and development of
            %   various software-defined radio (SDR) applications. The SDRu receiver
            %   object enables communication with a USRP(R) board on the same gigabit
            %   Ethernet subnetwork. This object receives signal and control data from
            %   a USRP(R) board using Universal Hardware Driver (UHD(TM)). Although the
            %   SDRu receiver System object receives data from a USRP(R) board, the
            %   object acts as a signal source that outputs a column vector signal of
            %   fixed length.
            %
            %   H = comm.SDRuReceiver(Name,Value) creates an SDRu receiver object, H,
            %   with the specified property Name set to the specified Value. You can
            %   specify additional name-value pair arguments in any order as
            %   (Name1,Value1,...,NameN,ValueN).
            %
            %   H = comm.SDRuReceiver(ADDRESS,Name,Value) creates an SDRu receiver
            %   object, H. This object has the IPAddress property set to ADDRESS and
            %   the other specified properties set to the specified values.
            %
            %   Step method syntax:
            %
            %   [Y,LEN] = step(H) receives signal and control data from a USRP(R)
            %   board using Universal Hardware Driver (UHD(TM)) packets. Output signal, Y,
            %   is a column vector of complex double precision, single precision or
            %   16-bit integer values and LEN is the actual data length.
            %
            %   [Y,LEN,OVER] = step(H) outputs the overrun flag, OVER, when the
            %   OverrunOutputPort is set to true. Output, OVER, is a scalar logical
            %   value. If one or more packets is dropped, then this output port has a
            %   value of true.
            %
            %   Y = step(H,FC) configures the USRP(R) board to receive at the center
            %   frequency, FC, when the CenterFrequencySource property is set to 'Input
            %   port'. Center frequency, FC, must be a double precision scalar.
            %
            %   Y = step(H,LO) configures the USRP(R) board to apply a local
            %   oscillator offset , LO, when the LocalOscillatorOffsetSource property
            %   is set to 'Input port'. The offset, LO, must be a double precision
            %   scalar.
            %
            %   Y = step(H,GAIN) configures the USRP(R) board to receive using a gain
            %   specified by the input, GAIN, when the GainSource property is set to
            %   'Input port'. Input, GAIN, must be a double precision scalar.
            %
            %   Y = step(H,DECIM) configures the USRP(R) board to receive using a
            %   decimation factor, DECIM, when the DecimationFactorSource property is
            %   set to 'Input port'. Input, DECIM, must be an integer scalar.
            %
            %   You can combine optional input arguments when you set their enabling
            %   properties. Optional inputs must be listed in the same order as the
            %   order of the enabling properties. For example,
            %
            %   Y = step(H,FC,LO,GAIN,DECIM)   
            %
            %   SDRuReceiver methods:
            %
            %   step     - Receive data from the USRP(R) board (see above)
            %   info     - Obtain USRP(R) board information
            %   release  - Allow property value and input characteristics changes
            %   isLocked - Locked status (logical)
            %
            %   SDRuReceiver properties:
            %
            %   IPAddress                   - IP address of the USRP(R) device
            %   CenterFrequencySource       - Source of center frequency
            %   CenterFrequency             - Desired center frequency in Hz
            %   ActualCenterFrequency       - Actual center frequency in Hz
            %   LocalOscillatorOffsetSource - Source of local oscillator offset
            %   LocalOscillatorOffset       - Desired local oscillator offset in Hz
            %   ActualLocalOscillatorOffset - Actual local oscillator offset in Hz
            %   GainSource                  - Source of gain
            %   Gain                        - Desired RF front-end gain in dB
            %   ActualGain                  - Actual RF front-end gain in dB
            %   DecimationFactorSource      - Source of decimation factor
            %   DecimationFactor            - Desired decimation factor
            %   ActualDecimationFactor      - Actual decimation factor
            %   OverrunOutputPort           - Output overrun flag
            %   SampleRate                  - Sample rate in Hz
            %   OutputDataType              - Data type of output
            %   FrameLength                 - Frame length
            %   EnableBurstMode             - Ensure a set of frames without overrun
            %   NumFramesInBurst            - Number of frames in contiguous burst
            %
            %   % Example: 
            %   %   Configure a USRP(R) board with an IP address of 192.168.10.2 to 
            %   %   receive at 2.2 GHz with a decimation factor of 256. Save the
            %   %   data using a signal logger System object.
            %
            %   hSDRu = comm.SDRuReceiver('192.168.10.2', ...
            %             'CenterFrequency', 2.2e9, ...
            %             'DecimationFactor', 256);
            %   hLogger = dsp.SignalSink;
            %   for counter = 1:20
            %     data = step(hSDRu);
            %     step(hLogger, data);
            %   end
            %
            %   See also comm.SDRuTransmitter.
            %
            %   Universal Software Radio Peripheral and USRP are a trademark of
            %   National Instruments Corp. 
        end

    end
    methods (Abstract)
    end
    properties
        %ActualDecimationFactor Actual decimation factor
        %   Report the actual decimation factor value of the daughterboard.
        %   Desired and actual decimation factors can be slightly different due
        %   to quantization. This property is read-only.
        ActualDecimationFactor;

        %DecimationFactor Desired decimation factor
        %   Specify the decimation factor for the SDRu receiver as an
        %   integer scalar. Valid values are
        %
        %     * 4 to 128
        %     * 128 to 256 (values in this range must be even)
        %     * 256 to 512 (values in this range must be evenly divisible by 4)
        %
        %   The default is 512. This property applies when you set the
        %   DecimationFactorSource to 'Property'. This property is tunable.
        DecimationFactor;

        %DecimationFactorSource Source of decimation factor
        %   Specify the source of the decimation factor as one of 'Property' |
        %   'Input port'. The default is 'Property'. Set DecimationFactorSource
        %   to 'Input port' to specify the decimation factor value via an input
        %   to the step method. Set DecimationFactorSource to 'Property' to
        %   specify the decimation factor value via the DecimationFactor
        %   property.
        DecimationFactorSource;

        %FrameLength Frame length 
        %   Specify the frame length of the output signal that the object
        %   generates as a positive, scalar integer. The default value is 362.
        FrameLength;

        %OutputDataType Data type of output
        %   Specify the output data type as one of 'double' | 'single' | 'int16'.
        %   The default is 'double'.
        OutputDataType;

        %OverrunOutputPort Output flag to indicate dropped packets
        %   Set this property to true so that the step method outputs a flag to
        %   indicate if one or more packets is dropped during USRP(R)
        %   transmission to the host. The default is false.
        OverrunOutputPort;

        %SampleRate Sample rate in Hz
        % Specify the sample rate of the input, in Hertz, as a double-precision,
        % positive, scalar value. The default is 1.
        SampleRate;

    end
end
