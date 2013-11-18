classdef SDRuTransmitter< handle
%SDRuTransmitter Send data to USRP(R) device
%   H = comm.SDRuTransmitter creates an SDRu transmitter System object, H,
%   that sends data to the Universal Software Radio Peripheral(R)
%   (USRP(R)). The SDRu transmitter object supports communication between
%   MATLAB(R) and a USRP(R) board, allowing simulation and development of
%   various software-defined radio (SDR) applications. The SDRu transmitter
%   object enables communication with a USRP(R) board on the same gigabit
%   Ethernet subnetwork. This object accepts a column vector input signal
%   from MATLAB and transmits signal and control data to a USRP(R) board
%   using a Universal Hardware Driver (UHD(TM)). Although the SDRu transmitter
%   System object sends data to a USRP(R) board, the object acts as a sink
%   in MATLAB.
%
%   H = comm.SDRuTransmitter(Name,Value) creates an SDRu transmitter
%   object, H, with the specified property Name set to the specified Value.
%   You can specify additional name-value pair arguments in any order as
%   (Name1,Value1,...,NameN,ValueN).
%
%   H = comm.SDRuTransmitter(ADDRESS,Name,Value) creates an SDRu
%   transmitter object, H. This object has the IPAddress property set to
%   ADDRESS and the other specified properties set to the specified values.
%
%   Step method syntax:
%
%   step(H,X) transmits signal and control data to a USRP(R) board using
%   Universal Hardware Driver (UHD(TM)) packets. Input signal, X, is a column
%   vector of double precision, single precision, or 16-bit integer values.
%
%   UNDER = step(H,X) outputs the underrun flag, UNDER, when the
%   UnderrunOutputPort is set to true. Output, UNDER, is a scalar logical
%   value. If one or more packets is dropped, then this output port has a
%   value of true.
%
%   step(H,X,FC) configures the USRP(R) board to transmit at the center
%   frequency, FC, when the CenterFrequencySource property is set to 'Input
%   port'. Center frequency, FC, must be a double precision scalar.
%
%   step(H,X,LO) configures the USRP(R) board to apply a local oscillator
%   offset , LO, when the LocalOscillatorOffsetSource property is set to
%   'Input port'. The offset, LO, must be a double precision scalar.
%
%   step(H,X,GAIN) configures the USRP(R) board to transmit using a gain
%   specified by the input, GAIN, when the GainSource property is set to
%   'Input port'. Input, GAIN, must be a double precision scalar.
%
%   step(H,X,INTERP) configures the USRP(R) board to transmit using an
%   interpolation factor, INTERP, when the InterpolationSource property is
%   set to 'Input port'. Input, INTERP, must be an integer scalar.
%
%   You can combine optional input arguments when you set their enabling
%   properties. Optional inputs must be listed in the same order as the
%   order of the enabling properties. For example,
%
%   step(H,X,FC,LO,GAIN,INTERP)   
%
%   SDRuTransmitter methods:
%
%   step     - Send data to the USRP(R) board (see above)
%   info     - Obtain USRP(R) board information
%   release  - Allow property value and input characteristics changes
%   isLocked - Locked status (logical)
%
%   SDRuTransmitter properties:
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
%   InterpolationFactorSource   - Source of the interpolation factor
%   InterpolationFactor         - Interpolation factor
%   ActualInterpolationFactor   - Actual Interpolation factor
%   UnderrunOutputPort          - Output underrun flag
%   EnableBurstMode             - Ensure a set of frames without underrun
%   NumFramesInBurst            - Number of frames in contiguous burst
%
%   % Example:
%   %   Configure a USRP(R) board with an IP address of 192.168.10.2 to
%   %   transmit at 2.2 GHz with an interpolation factor of 256.
%
%   hSDRu = comm.SDRuTransmitter(...
%             'IPAddress', '192.168.10.2', ...
%             'CenterFrequency', 2.2e9, ...
%             'InterpolationFactor', 256);
%   hMod = comm.DPSKModulator('BitInput',true);
%   for counter = 1:20
%     data = randi([0 1], 30, 1);
%     modSignal = step(hMod, data);
%     step(hSDRu, modSignal);
%   end
%
%   See also comm.SDRuReceiver.
%
%   USRP is a trademark of National Instruments Corp.

 
%   Copyright 2010-2012 The MathWorks, Inc.

    methods
        function out=SDRuTransmitter
            %SDRuTransmitter Send data to USRP(R) device
            %   H = comm.SDRuTransmitter creates an SDRu transmitter System object, H,
            %   that sends data to the Universal Software Radio Peripheral(R)
            %   (USRP(R)). The SDRu transmitter object supports communication between
            %   MATLAB(R) and a USRP(R) board, allowing simulation and development of
            %   various software-defined radio (SDR) applications. The SDRu transmitter
            %   object enables communication with a USRP(R) board on the same gigabit
            %   Ethernet subnetwork. This object accepts a column vector input signal
            %   from MATLAB and transmits signal and control data to a USRP(R) board
            %   using a Universal Hardware Driver (UHD(TM)). Although the SDRu transmitter
            %   System object sends data to a USRP(R) board, the object acts as a sink
            %   in MATLAB.
            %
            %   H = comm.SDRuTransmitter(Name,Value) creates an SDRu transmitter
            %   object, H, with the specified property Name set to the specified Value.
            %   You can specify additional name-value pair arguments in any order as
            %   (Name1,Value1,...,NameN,ValueN).
            %
            %   H = comm.SDRuTransmitter(ADDRESS,Name,Value) creates an SDRu
            %   transmitter object, H. This object has the IPAddress property set to
            %   ADDRESS and the other specified properties set to the specified values.
            %
            %   Step method syntax:
            %
            %   step(H,X) transmits signal and control data to a USRP(R) board using
            %   Universal Hardware Driver (UHD(TM)) packets. Input signal, X, is a column
            %   vector of double precision, single precision, or 16-bit integer values.
            %
            %   UNDER = step(H,X) outputs the underrun flag, UNDER, when the
            %   UnderrunOutputPort is set to true. Output, UNDER, is a scalar logical
            %   value. If one or more packets is dropped, then this output port has a
            %   value of true.
            %
            %   step(H,X,FC) configures the USRP(R) board to transmit at the center
            %   frequency, FC, when the CenterFrequencySource property is set to 'Input
            %   port'. Center frequency, FC, must be a double precision scalar.
            %
            %   step(H,X,LO) configures the USRP(R) board to apply a local oscillator
            %   offset , LO, when the LocalOscillatorOffsetSource property is set to
            %   'Input port'. The offset, LO, must be a double precision scalar.
            %
            %   step(H,X,GAIN) configures the USRP(R) board to transmit using a gain
            %   specified by the input, GAIN, when the GainSource property is set to
            %   'Input port'. Input, GAIN, must be a double precision scalar.
            %
            %   step(H,X,INTERP) configures the USRP(R) board to transmit using an
            %   interpolation factor, INTERP, when the InterpolationSource property is
            %   set to 'Input port'. Input, INTERP, must be an integer scalar.
            %
            %   You can combine optional input arguments when you set their enabling
            %   properties. Optional inputs must be listed in the same order as the
            %   order of the enabling properties. For example,
            %
            %   step(H,X,FC,LO,GAIN,INTERP)   
            %
            %   SDRuTransmitter methods:
            %
            %   step     - Send data to the USRP(R) board (see above)
            %   info     - Obtain USRP(R) board information
            %   release  - Allow property value and input characteristics changes
            %   isLocked - Locked status (logical)
            %
            %   SDRuTransmitter properties:
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
            %   InterpolationFactorSource   - Source of the interpolation factor
            %   InterpolationFactor         - Interpolation factor
            %   ActualInterpolationFactor   - Actual Interpolation factor
            %   UnderrunOutputPort          - Output underrun flag
            %   EnableBurstMode             - Ensure a set of frames without underrun
            %   NumFramesInBurst            - Number of frames in contiguous burst
            %
            %   % Example:
            %   %   Configure a USRP(R) board with an IP address of 192.168.10.2 to
            %   %   transmit at 2.2 GHz with an interpolation factor of 256.
            %
            %   hSDRu = comm.SDRuTransmitter(...
            %             'IPAddress', '192.168.10.2', ...
            %             'CenterFrequency', 2.2e9, ...
            %             'InterpolationFactor', 256);
            %   hMod = comm.DPSKModulator('BitInput',true);
            %   for counter = 1:20
            %     data = randi([0 1], 30, 1);
            %     modSignal = step(hMod, data);
            %     step(hSDRu, modSignal);
            %   end
            %
            %   See also comm.SDRuReceiver.
            %
            %   USRP is a trademark of National Instruments Corp.
        end

    end
    methods (Abstract)
    end
    properties
        %ActualInterpolationFactor Actual interpolation factor
        %   Report the actual interpolation factor of the daughterboard. Desired
        %   and actual interpolation factors can be slightly different due to
        %   quantization. This property is read-only.
        ActualInterpolationFactor;

        %InterpolationFactor Desired interpolation factor
        %   Specify the interpolation factor for the SDRu transmitter as an
        %   integer scalar. Valid values are
        %
        %     * 4 to 128
        %     * 128 to 256 (values in this range must be even)
        %     * 256 to 512 (values in this range must be evenly divisible by 4)
        %
        %   The default is 512. This property applies when you set the
        %   InterpolationFactorSource to 'Property'. This property is tunable.
        InterpolationFactor;

        %InterpolationFactorSource Source of the interpolation factor
        %   Specify the source of the interpolation factor as one of 'Property' |
        %   'Input port'. The default is 'Property'. Set
        %   InterpolationFactorSource to 'Input port' to specify the
        %   interpolation factor value via an input to the step method. Set
        %   InterpolationFactorSource to 'Property' to specify the interpolation
        %   factor value via the InterpolationFactor property.
        InterpolationFactorSource;

        %UnderrunOutputPort Output flag to indicate dropped packets
        %   Set this property to true so that the step method outputs a flag to
        %   indicate if one or more packets is dropped during USRP(R) reception
        %   from the host. The default is false.
        UnderrunOutputPort;

    end
end
