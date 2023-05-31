###########################################################################
## Makefile generated for component 'FCElectricPlant'. 
## 
## Makefile     : FCElectricPlant.mk
## Generated on : Wed May 31 11:04:10 2023
## Final product: ./FCElectricPlantlib.lib
## Product type : static library
## 
###########################################################################

###########################################################################
## MACROS
###########################################################################

# Macro Descriptions:
# PRODUCT_NAME            Name of the system to build
# MAKEFILE                Name of this makefile
# COMPILER_COMMAND_FILE   Compiler command listing model reference header paths
# CMD_FILE                Command file
# MODELLIB                Static library target

PRODUCT_NAME              = FCElectricPlant
MAKEFILE                  = FCElectricPlant.mk
MATLAB_ROOT               = C:/PROGRA~1/MATLAB/R2022a
MATLAB_BIN                = C:/PROGRA~1/MATLAB/R2022a/bin
MATLAB_ARCH_BIN           = $(MATLAB_BIN)/win64
START_DIR                 = C:/Users/Adi/MATLAB/Projects/examples/FCEV/FCEV/Work
SOLVER                    = 
SOLVER_OBJ                = 
CLASSIC_INTERFACE         = 0
TGT_FCN_LIB               = ISO_C
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0
RELATIVE_PATH_TO_ANCHOR   = ../../..
COMPILER_COMMAND_FILE     = FCElectricPlant_comp.rsp
CMD_FILE                  = FCElectricPlant.rsp
C_STANDARD_OPTS           = -fwrapv
CPP_STANDARD_OPTS         = -fwrapv
MODELLIB                  = FCElectricPlantlib.lib
LIBSSC_SLI_RTWSFCN_MINGW64_OBJS = 
LIBSSC_CORE_RTWSFCN_MINGW64_OBJS = 
LIBSSC_ST_RTWSFCN_MINGW64_OBJS = 
LIBMC_RTWSFCN_MINGW64_OBJS = 
LIBEX_RTWSFCN_MINGW64_OBJS = 
LIBPM_RTWSFCN_MINGW64_OBJS = 

###########################################################################
## TOOLCHAIN SPECIFICATIONS
###########################################################################

# Toolchain Name:          MinGW64 | gmake (64-bit Windows)
# Supported Version(s):    6.x
# ToolchainInfo Version:   2022a
# Specification Revision:  1.0
# 
#-------------------------------------------
# Macros assumed to be defined elsewhere
#-------------------------------------------

# C_STANDARD_OPTS
# CPP_STANDARD_OPTS
# MINGW_ROOT
# MINGW_C_STANDARD_OPTS

#-----------
# MACROS
#-----------

WARN_FLAGS            = -Wall -W -Wwrite-strings -Winline -Wstrict-prototypes -Wnested-externs -Wpointer-arith -Wcast-align
WARN_FLAGS_MAX        = $(WARN_FLAGS) -Wcast-qual -Wshadow
CPP_WARN_FLAGS        = -Wall -W -Wwrite-strings -Winline -Wpointer-arith -Wcast-align
CPP_WARN_FLAGS_MAX    = $(CPP_WARN_FLAGS) -Wcast-qual -Wshadow
MW_EXTERNLIB_DIR      = $(MATLAB_ROOT)/extern/lib/win64/mingw64
SHELL                 = %SystemRoot%/system32/cmd.exe

TOOLCHAIN_SRCS = 
TOOLCHAIN_INCS = 
TOOLCHAIN_LIBS = -lws2_32

#------------------------
# BUILD TOOL COMMANDS
#------------------------

# C Compiler: GNU C Compiler
CC_PATH = $(MINGW_ROOT)
CC = "$(CC_PATH)/gcc"

# Linker: GNU Linker
LD_PATH = $(MINGW_ROOT)
LD = "$(LD_PATH)/g++"

# C++ Compiler: GNU C++ Compiler
CPP_PATH = $(MINGW_ROOT)
CPP = "$(CPP_PATH)/g++"

# C++ Linker: GNU C++ Linker
CPP_LD_PATH = $(MINGW_ROOT)
CPP_LD = "$(CPP_LD_PATH)/g++"

# Archiver: GNU Archiver
AR_PATH = $(MINGW_ROOT)
AR = "$(AR_PATH)/ar"

# MEX Tool: MEX Tool
MEX_PATH = $(MATLAB_ARCH_BIN)
MEX = "$(MEX_PATH)/mex"

# Download: Download
DOWNLOAD =

# Execute: Execute
EXECUTE = $(PRODUCT)

# Builder: GMAKE Utility
MAKE_PATH = %MATLAB%/bin/win64
MAKE = "$(MAKE_PATH)/gmake"


#-------------------------
# Directives/Utilities
#-------------------------

CDEBUG              = -g
C_OUTPUT_FLAG       = -o
LDDEBUG             = -g
OUTPUT_FLAG         = -o
CPPDEBUG            = -g
CPP_OUTPUT_FLAG     = -o
CPPLDDEBUG          = -g
OUTPUT_FLAG         = -o
ARDEBUG             =
STATICLIB_OUTPUT_FLAG =
MEX_DEBUG           = -g
RM                  = @del
ECHO                = @echo
MV                  = @move
RUN                 =

#----------------------------------------
# "Faster Builds" Build Configuration
#----------------------------------------

ARFLAGS              = ruvs
CFLAGS               = -c $(MINGW_C_STANDARD_OPTS) -m64 \
                       -O0
CPPFLAGS             = -c $(CPP_STANDARD_OPTS) -m64 \
                       -O0
CPP_LDFLAGS          =  -static -m64
CPP_SHAREDLIB_LDFLAGS  = -shared -Wl,--no-undefined \
                         -Wl,--out-implib,$(notdir $(basename $(PRODUCT))).lib
DOWNLOAD_FLAGS       =
EXECUTE_FLAGS        =
LDFLAGS              =  -static -m64
MEX_CPPFLAGS         =
MEX_CPPLDFLAGS       =
MEX_CFLAGS           =
MEX_LDFLAGS          =
MAKE_FLAGS           = -f $(MAKEFILE)
SHAREDLIB_LDFLAGS    = -shared -Wl,--no-undefined \
                       -Wl,--out-implib,$(notdir $(basename $(PRODUCT))).lib



###########################################################################
## OUTPUT INFO
###########################################################################

PRODUCT = ./FCElectricPlantlib.lib
PRODUCT_TYPE = "static library"
BUILD_TYPE = "Model Reference Library"

###########################################################################
## INCLUDE PATHS
###########################################################################

INCLUDES_BUILDINFO = 

INCLUDES = $(INCLUDES_BUILDINFO)

###########################################################################
## DEFINES
###########################################################################

DEFINES_BUILD_ARGS = -DCLASSIC_INTERFACE=0 -DALLOCATIONFCN=0 -DTERMFCN=1 -DONESTEPFCN=0 -DMAT_FILE=0 -DMULTI_INSTANCE_CODE=0 -DINTEGER_CODE=0
DEFINES_CUSTOM = 
DEFINES_OPTS = -DIS_SIM_TARGET -DMATLAB_MEX_FILE -DTID01EQ=0
DEFINES_STANDARD = -DMODEL=FCElectricPlant -DNUMST=2 -DNCSTATES=603 -DHAVESTDIO -DMDL_REF_SIM_TGT=1 -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0

DEFINES = $(DEFINES_BUILD_ARGS) $(DEFINES_CUSTOM) $(DEFINES_OPTS) $(DEFINES_STANDARD)

###########################################################################
## SOURCE FILES
###########################################################################

SRCS = $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_zc.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_tdxy_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxy_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_y.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_obs_all.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_obs_exp.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_mode.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_vmm.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxm_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_m_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_log.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_nldv.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dpm_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_obs_il.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxicr_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_icr.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxm.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_lv.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dnf_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dnf_v_x.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_tdxf_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_obs_act.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_b.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_a.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxy.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_tduf_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_duf_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_ic.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_slv.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_vmf.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxf_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dnf.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxf.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_f.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_a_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_b_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_iassert.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_m.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_assert.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dpdxf_p.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_duf.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_gateway.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant.c $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_capi.c

ALL_SRCS = $(SRCS)

###########################################################################
## OBJECTS
###########################################################################

OBJS = FCElectricPlant_ac851afd_1_ds.obj FCElectricPlant_ac851afd_1_ds_zc.obj FCElectricPlant_ac851afd_1_ds_tdxy_p.obj FCElectricPlant_ac851afd_1_ds_dxy_p.obj FCElectricPlant_ac851afd_1_ds_y.obj FCElectricPlant_ac851afd_1_ds_obs_all.obj FCElectricPlant_ac851afd_1_ds_obs_exp.obj FCElectricPlant_ac851afd_1_ds_mode.obj FCElectricPlant_ac851afd_1_ds_vmm.obj FCElectricPlant_ac851afd_1_ds_dxm_p.obj FCElectricPlant_ac851afd_1_ds_m_p.obj FCElectricPlant_ac851afd_1_ds_log.obj FCElectricPlant_ac851afd_1_ds_nldv.obj FCElectricPlant_ac851afd_1_ds_dpm_p.obj FCElectricPlant_ac851afd_1_ds_obs_il.obj FCElectricPlant_ac851afd_1_ds_dxicr_p.obj FCElectricPlant_ac851afd_1_ds_icr.obj FCElectricPlant_ac851afd_1_ds_dxm.obj FCElectricPlant_ac851afd_1_ds_lv.obj FCElectricPlant_ac851afd_1_ds_dnf_p.obj FCElectricPlant_ac851afd_1_ds_dnf_v_x.obj FCElectricPlant_ac851afd_1_ds_tdxf_p.obj FCElectricPlant_ac851afd_1_ds_obs_act.obj FCElectricPlant_ac851afd_1_ds_b.obj FCElectricPlant_ac851afd_1_ds_a.obj FCElectricPlant_ac851afd_1_ds_dxy.obj FCElectricPlant_ac851afd_1_ds_tduf_p.obj FCElectricPlant_ac851afd_1_ds_duf_p.obj FCElectricPlant_ac851afd_1_ds_ic.obj FCElectricPlant_ac851afd_1_ds_slv.obj FCElectricPlant_ac851afd_1_ds_vmf.obj FCElectricPlant_ac851afd_1_ds_dxf_p.obj FCElectricPlant_ac851afd_1_ds_dnf.obj FCElectricPlant_ac851afd_1_ds_dxf.obj FCElectricPlant_ac851afd_1_ds_f.obj FCElectricPlant_ac851afd_1_ds_a_p.obj FCElectricPlant_ac851afd_1_ds_b_p.obj FCElectricPlant_ac851afd_1_ds_iassert.obj FCElectricPlant_ac851afd_1_ds_m.obj FCElectricPlant_ac851afd_1_ds_assert.obj FCElectricPlant_ac851afd_1_ds_dpdxf_p.obj FCElectricPlant_ac851afd_1_ds_duf.obj FCElectricPlant_ac851afd_1.obj FCElectricPlant_ac851afd_1_gateway.obj FCElectricPlant.obj FCElectricPlant_capi.obj

ALL_OBJS = $(OBJS)

###########################################################################
## PREBUILT OBJECT FILES
###########################################################################

PREBUILT_OBJS = 

###########################################################################
## LIBRARIES
###########################################################################

LIBS = $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/win64/ssc_sli_rtwsfcn_mingw64.lib $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/win64/ssc_core_rtwsfcn_mingw64.lib $(MATLAB_ROOT)/toolbox/physmod/simscape/simtypes/core/lib/win64/ssc_st_rtwsfcn_mingw64.lib $(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/win64/mc_rtwsfcn_mingw64.lib $(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/win64/ex_rtwsfcn_mingw64.lib $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/win64/pm_rtwsfcn_mingw64.lib $(START_DIR)/slprj/sim/_sharedutils/rtwshared.lib

###########################################################################
## SYSTEM LIBRARIES
###########################################################################

SYSTEM_LIBS =  -L"$(MATLAB_ROOT)/extern/lib/win64/mingw64" -llibfixedpoint -llibmwmathutil -llibmwipp -llibmwsl_AsyncioQueue -lsf_runtime -llibmwslexec_simlog -llibmwcoder_ToAsyncQueueTgtAppSvc -llibmwsl_simtarget_instrumentation -llibmwsl_simtarget_core -llibmwstringutil

###########################################################################
## ADDITIONAL TOOLCHAIN FLAGS
###########################################################################

#---------------
# C Compiler
#---------------

CFLAGS_TFL = -msse2
CFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CFLAGS += $(CFLAGS_TFL) $(CFLAGS_BASIC)

#-----------------
# C++ Compiler
#-----------------

CPPFLAGS_TFL = -msse2
CPPFLAGS_BASIC = $(DEFINES) $(INCLUDES) @$(COMPILER_COMMAND_FILE)

CPPFLAGS += $(CPPFLAGS_TFL) $(CPPFLAGS_BASIC)

#---------------------
# MEX C++ Compiler
#---------------------

MEX_CPP_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CPPFLAGS += $(MEX_CPP_Compiler_BASIC)

#-----------------
# MEX Compiler
#-----------------

MEX_Compiler_BASIC =  @$(COMPILER_COMMAND_FILE)

MEX_CFLAGS += $(MEX_Compiler_BASIC)

###########################################################################
## INLINED COMMANDS
###########################################################################


MINGW_C_STANDARD_OPTS = $(C_STANDARD_OPTS)


###########################################################################
## PHONY TARGETS
###########################################################################

.PHONY : all build clean info prebuild download execute


all : build
	@echo "### Successfully generated all binary outputs."


build : prebuild $(PRODUCT)


prebuild : 


download : $(PRODUCT)


execute : download


###########################################################################
## FINAL TARGET
###########################################################################

#---------------------------------
# Create a static library         
#---------------------------------

$(PRODUCT) : $(OBJS) $(PREBUILT_OBJS)
	@echo "### Creating static library "$(PRODUCT)" ..."
	$(AR) $(ARFLAGS)  $(PRODUCT) @$(CMD_FILE)
	@echo "### Created: $(PRODUCT)"


###########################################################################
## INTERMEDIATE TARGETS
###########################################################################

#---------------------
# SOURCE-TO-OBJECT
#---------------------

%.obj : %.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : %.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(RELATIVE_PATH_TO_ANCHOR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/compiler/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/ds/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/ds/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/simtypes/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/simscape/simtypes/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/math/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/logging/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/logging/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/lang/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/external/library/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/c/win64/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/slprj/sim/FCElectricPlant/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(START_DIR)/slprj/sim/FCElectricPlant/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/rtw/c/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.c
	$(CC) $(CFLAGS) -o "$@" "$<"


%.obj : $(MATLAB_ROOT)/simulink/src/%.cpp
	$(CPP) $(CPPFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_zc.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_zc.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_tdxy_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_tdxy_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dxy_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxy_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_y.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_y.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_obs_all.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_obs_all.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_obs_exp.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_obs_exp.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_mode.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_mode.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_vmm.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_vmm.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dxm_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxm_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_m_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_m_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_log.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_log.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_nldv.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_nldv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dpm_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dpm_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_obs_il.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_obs_il.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dxicr_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxicr_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_icr.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_icr.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dxm.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxm.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_lv.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_lv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dnf_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dnf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dnf_v_x.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dnf_v_x.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_tdxf_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_tdxf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_obs_act.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_obs_act.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_b.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_b.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_a.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_a.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dxy.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxy.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_tduf_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_tduf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_duf_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_duf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_ic.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_ic.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_slv.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_slv.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_vmf.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_vmf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dxf_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dnf.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dnf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dxf.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dxf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_f.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_f.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_a_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_a_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_b_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_b_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_iassert.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_iassert.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_m.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_m.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_assert.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_assert.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_dpdxf_p.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_dpdxf_p.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_ds_duf.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_ds_duf.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_ac851afd_1_gateway.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_ac851afd_1_gateway.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant.c
	$(CC) $(CFLAGS) -o "$@" "$<"


FCElectricPlant_capi.obj : $(START_DIR)/slprj/sim/FCElectricPlant/FCElectricPlant_capi.c
	$(CC) $(CFLAGS) -o "$@" "$<"


#------------------------
# BUILDABLE LIBRARIES
#------------------------

$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/sli/lib/win64/ssc_sli_rtwsfcn_mingw64.lib : $(LIBSSC_SLI_RTWSFCN_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_SLI_RTWSFCN_MINGW64_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/simscape/engine/core/lib/win64/ssc_core_rtwsfcn_mingw64.lib : $(LIBSSC_CORE_RTWSFCN_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_CORE_RTWSFCN_MINGW64_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/simscape/simtypes/core/lib/win64/ssc_st_rtwsfcn_mingw64.lib : $(LIBSSC_ST_RTWSFCN_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBSSC_ST_RTWSFCN_MINGW64_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/common/math/core/lib/win64/mc_rtwsfcn_mingw64.lib : $(LIBMC_RTWSFCN_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBMC_RTWSFCN_MINGW64_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/common/external/library/lib/win64/ex_rtwsfcn_mingw64.lib : $(LIBEX_RTWSFCN_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBEX_RTWSFCN_MINGW64_OBJS)


$(MATLAB_ROOT)/toolbox/physmod/common/foundation/core/lib/win64/pm_rtwsfcn_mingw64.lib : $(LIBPM_RTWSFCN_MINGW64_OBJS)
	@echo "### Creating static library $@ ..."
	$(AR) $(ARFLAGS)  $@ $(LIBPM_RTWSFCN_MINGW64_OBJS)


###########################################################################
## DEPENDENCIES
###########################################################################

$(ALL_OBJS) : rtw_proj.tmw $(COMPILER_COMMAND_FILE) $(MAKEFILE)


###########################################################################
## MISCELLANEOUS TARGETS
###########################################################################

info : 
	@echo "### PRODUCT = $(PRODUCT)"
	@echo "### PRODUCT_TYPE = $(PRODUCT_TYPE)"
	@echo "### BUILD_TYPE = $(BUILD_TYPE)"
	@echo "### INCLUDES = $(INCLUDES)"
	@echo "### DEFINES = $(DEFINES)"
	@echo "### ALL_SRCS = $(ALL_SRCS)"
	@echo "### ALL_OBJS = $(ALL_OBJS)"
	@echo "### LIBS = $(LIBS)"
	@echo "### MODELREF_LIBS = $(MODELREF_LIBS)"
	@echo "### SYSTEM_LIBS = $(SYSTEM_LIBS)"
	@echo "### TOOLCHAIN_LIBS = $(TOOLCHAIN_LIBS)"
	@echo "### CFLAGS = $(CFLAGS)"
	@echo "### LDFLAGS = $(LDFLAGS)"
	@echo "### SHAREDLIB_LDFLAGS = $(SHAREDLIB_LDFLAGS)"
	@echo "### CPPFLAGS = $(CPPFLAGS)"
	@echo "### CPP_LDFLAGS = $(CPP_LDFLAGS)"
	@echo "### CPP_SHAREDLIB_LDFLAGS = $(CPP_SHAREDLIB_LDFLAGS)"
	@echo "### ARFLAGS = $(ARFLAGS)"
	@echo "### MEX_CFLAGS = $(MEX_CFLAGS)"
	@echo "### MEX_CPPFLAGS = $(MEX_CPPFLAGS)"
	@echo "### MEX_LDFLAGS = $(MEX_LDFLAGS)"
	@echo "### MEX_CPPLDFLAGS = $(MEX_CPPLDFLAGS)"
	@echo "### DOWNLOAD_FLAGS = $(DOWNLOAD_FLAGS)"
	@echo "### EXECUTE_FLAGS = $(EXECUTE_FLAGS)"
	@echo "### MAKE_FLAGS = $(MAKE_FLAGS)"


clean : 
	$(ECHO) "### Deleting all derived files..."
	$(RM) $(subst /,\,$(PRODUCT))
	$(RM) $(subst /,\,$(ALL_OBJS))
	$(ECHO) "### Deleted all derived files."


