START_DIR = /home/sdruser/git/OFDMSync/hardware/USRP_OFDM/sdru/sdrudemos

MATLAB_ROOT = /opt/MATLAB/R2013a
MAKEFILE = runSDRuQPSKReceiver_mex.mk

include runSDRuQPSKReceiver_mex.mki


SRC_FILES =  \
	runSDRuQPSKReceiver_mexutil.c \
	runSDRuQPSKReceiver_data.c \
	runSDRuQPSKReceiver_initialize.c \
	runSDRuQPSKReceiver_terminate.c \
	runSDRuQPSKReceiver.c \
	sdruQPSKRx.c \
	SystemProp.c \
	SystemCore.c \
	SDRuReceiver.c \
	checkIPAddressFormat.c \
	power.c \
	receiveData.c \
	error.c \
	QPSKCoarseFrequencyCompensator.c \
	QPSKTimingRecovery.c \
	sdruQPSKDataDecoder.c \
	mod.c \
	abs.c \
	mean.c \
	fft.c \
	exp.c \
	Buffer.c \
	closeDataConnection.c \
	runSDRuQPSKReceiver_api.c \
	runSDRuQPSKReceiver_mex.c

MEX_FILE_NAME_WO_EXT = runSDRuQPSKReceiver_mex
MEX_FILE_NAME = $(MEX_FILE_NAME_WO_EXT).mexa64
TARGET = $(MEX_FILE_NAME)

CustomCode_LIBS = "/tmp/MATLAB/SupportPackages/R2013a/sdru/bin/glnxa64/libmwusrp_uhd_capi.so" 
SYS_LIBS = $(CustomCode_LIBS) 


#
#====================================================================
# gmake makefile fragment for building MEX functions using Unix
# Copyright 2007-2012 The MathWorks, Inc.
#====================================================================
#
OBJEXT = o
.SUFFIXES: .$(OBJEXT)

OBJLISTC = $(SRC_FILES:.c=.$(OBJEXT))
OBJLISTCPP  = $(OBJLISTC:.cpp=.$(OBJEXT))
OBJLIST  = $(OBJLISTCPP:.cu=.$(OBJEXT))

target: $(TARGET)

ML_INCLUDES = -I "$(MATLAB_ROOT)/simulink/include"
ML_INCLUDES+= -I "$(MATLAB_ROOT)/toolbox/shared/simtargets"
ML_INCLUDES+= -I "$(MATLAB_ROOT)/rtw/ext_mode/common"
ML_INCLUDES+= -I "$(MATLAB_ROOT)/rtw/c/src/ext_mode/common"
SYS_INCLUDE = $(ML_INCLUDES)

# Additional includes

SYS_INCLUDE += -I "$(START_DIR)"
SYS_INCLUDE += -I "$(START_DIR)/codegen/mex/runSDRuQPSKReceiver"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/extern/include"
SYS_INCLUDE += -I "$(MATLAB_ROOT)/src/include"
SYS_INCLUDE += -I "/tmp/MATLAB/SupportPackages/R2013a/sdru/include"

EML_LIBS = -lemlrt -lut -lmwmathutil -lmwblas
SYS_LIBS += $(CLIBS) $(EML_LIBS)


EXPORTFILE = $(MEX_FILE_NAME_WO_EXT)_mex.map
ifeq ($(Arch),maci)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) -DMX_COMPAT_32
  CXX_FLAGS = -c $(CXXFLAGS) -DMX_COMPAT_32
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS))
else ifeq ($(Arch),maci64)
  EXPORTOPT = -Wl,-exported_symbols_list,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) -DMX_COMPAT_32
  CXX_FLAGS = -c $(CXXFLAGS) -DMX_COMPAT_32
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS))
else
  EXPORTOPT = -Wl,--version-script,$(EXPORTFILE)
  COMP_FLAGS = -c $(CFLAGS) -DMX_COMPAT_32 $(OMPFLAGS)
  CXX_FLAGS = -c $(CXXFLAGS) -DMX_COMPAT_32 $(OMPFLAGS)
  LINK_FLAGS = $(filter-out %mexFunction.map, $(LDFLAGS)) 
endif
LINK_FLAGS += $(OMPLINKFLAGS)
ifeq ($(Arch),maci)
  LINK_FLAGS += -L$(MATLAB_ROOT)/sys/os/maci
endif
ifeq ($(EMC_CONFIG),optim)
  ifeq ($(Arch),mac)
    COMP_FLAGS += $(CDEBUGFLAGS)
    CXX_FLAGS += $(CXXDEBUGFLAGS)
  else
    COMP_FLAGS += $(COPTIMFLAGS)
    CXX_FLAGS += $(CXXOPTIMFLAGS)
  endif
  LINK_FLAGS += $(LDOPTIMFLAGS)
else
  COMP_FLAGS += $(CDEBUGFLAGS)
  CXX_FLAGS += $(CXXDEBUGFLAGS)
  LINK_FLAGS += $(LDDEBUGFLAGS)
endif
LINK_FLAGS += -o $(TARGET)
LINK_FLAGS += 

CCFLAGS =  $(COMP_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)
CPPFLAGS =   $(CXX_FLAGS) $(USER_INCLUDE) $(SYS_INCLUDE)

%.$(OBJEXT) : %.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : %.cpp
	$(CXX) $(CPPFLAGS) "$<"

# Additional sources

%.$(OBJEXT) : $(START_DIR)/%.c
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/runSDRuQPSKReceiver/%.c
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cu
	$(CC) $(CCFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/runSDRuQPSKReceiver/%.cu
	$(CC) $(CCFLAGS) "$<"



%.$(OBJEXT) : $(START_DIR)/%.cpp
	$(CXX) $(CPPFLAGS) "$<"

%.$(OBJEXT) : $(START_DIR)/codegen/mex/runSDRuQPSKReceiver/%.cpp
	$(CXX) $(CPPFLAGS) "$<"



$(TARGET): $(OBJLIST) $(MAKEFILE)
	$(LD) $(EXPORTOPT) $(LINK_FLAGS) $(OBJLIST) $(SYS_LIBS)

#====================================================================

