function [ x ] = TestOFDMCodegen

    x=1;
    h = comm.OFDMDemodulator('FFTLength', 64);
    release(h);
    
end

