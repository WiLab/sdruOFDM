MATLAB="/opt/MATLAB/R2013a"
Arch=glnxa64
ENTRYPOINT=mexFunction
MAPFILE=$ENTRYPOINT'.map'
PREFDIR="/home/sdruser/.matlab/R2013a"
OPTSFILE_NAME="./mexopts.sh"
. $OPTSFILE_NAME
COMPILER=$CC
. $OPTSFILE_NAME
echo "# Make settings for runSDRuQPSKReceiver" > runSDRuQPSKReceiver_mex.mki
echo "CC=$CC" >> runSDRuQPSKReceiver_mex.mki
echo "CFLAGS=$CFLAGS" >> runSDRuQPSKReceiver_mex.mki
echo "CLIBS=$CLIBS" >> runSDRuQPSKReceiver_mex.mki
echo "COPTIMFLAGS=$COPTIMFLAGS" >> runSDRuQPSKReceiver_mex.mki
echo "CDEBUGFLAGS=$CDEBUGFLAGS" >> runSDRuQPSKReceiver_mex.mki
echo "CXX=$CXX" >> runSDRuQPSKReceiver_mex.mki
echo "CXXFLAGS=$CXXFLAGS" >> runSDRuQPSKReceiver_mex.mki
echo "CXXLIBS=$CXXLIBS" >> runSDRuQPSKReceiver_mex.mki
echo "CXXOPTIMFLAGS=$CXXOPTIMFLAGS" >> runSDRuQPSKReceiver_mex.mki
echo "CXXDEBUGFLAGS=$CXXDEBUGFLAGS" >> runSDRuQPSKReceiver_mex.mki
echo "LD=$LD" >> runSDRuQPSKReceiver_mex.mki
echo "LDFLAGS=$LDFLAGS" >> runSDRuQPSKReceiver_mex.mki
echo "LDOPTIMFLAGS=$LDOPTIMFLAGS" >> runSDRuQPSKReceiver_mex.mki
echo "LDDEBUGFLAGS=$LDDEBUGFLAGS" >> runSDRuQPSKReceiver_mex.mki
echo "Arch=$Arch" >> runSDRuQPSKReceiver_mex.mki
echo OMPFLAGS= >> runSDRuQPSKReceiver_mex.mki
echo OMPLINKFLAGS= >> runSDRuQPSKReceiver_mex.mki
echo "EMC_COMPILER=" >> runSDRuQPSKReceiver_mex.mki
echo "EMC_CONFIG=optim" >> runSDRuQPSKReceiver_mex.mki
"/opt/MATLAB/R2013a/bin/glnxa64/gmake" -B -f runSDRuQPSKReceiver_mex.mk
