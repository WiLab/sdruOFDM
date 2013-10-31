MATLAB="/opt/MATLAB/R2013a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sdruser/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for TestSDRuCodegen" > TestSDRuCodegen_mex.mki
echo "CC=$CC" >> TestSDRuCodegen_mex.mki
echo "CFLAGS=$CFLAGS" >> TestSDRuCodegen_mex.mki
echo "CLIBS=$CLIBS" >> TestSDRuCodegen_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> TestSDRuCodegen_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> TestSDRuCodegen_mex.mki
echo "CXX=$CXX" >> TestSDRuCodegen_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> TestSDRuCodegen_mex.mki
echo "CXXLIBS=$CXXLIBS" >> TestSDRuCodegen_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> TestSDRuCodegen_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> TestSDRuCodegen_mex.mki
echo "LD=$LD" >> TestSDRuCodegen_mex.mki
echo "LDFLAGS=$LDFLAGS" >> TestSDRuCodegen_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> TestSDRuCodegen_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> TestSDRuCodegen_mex.mki
echo "Arch=$Arch" >> TestSDRuCodegen_mex.mki
echo OMPFLAGS= >> TestSDRuCodegen_mex.mki
echo OMPLINKFLAGS= >> TestSDRuCodegen_mex.mki
echo "EMC_COMPILER=" >> TestSDRuCodegen_mex.mki
echo "EMC_CONFIG=optim" >> TestSDRuCodegen_mex.mki
"/opt/MATLAB/R2013a/bin/glnxa64/gmake" -B -f TestSDRuCodegen_mex.mk
