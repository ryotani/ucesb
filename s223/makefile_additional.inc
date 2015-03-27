# -*- Makefile -*-

USE_LMD_INPUT=1

OBJS += s223_user.o s223_user_ap.o land_fcns.o land_user.o

USER_STRUCT_FILE = s223_user_struct.hh

# For the auto-pedestal-adjustment from ccdaqlib
CCDAQLIB_DIR=$(call TREE_UCESB_OR_HOME_SRC_DIR,landdaq/ccdaqlib)
# For the common land directory
LAND_COMMON_DIR = ./../land_common
# For the cros3_ext (common)
PDC_DIR = $(UCESB_BASE_DIR)/dets/pdc

include $(PDC_DIR)/makefile_pdc_ext.inc

CXXFLAGS        += -I$(PDC_DIR)
UCESB_CPP_FLAGS += -I$(PDC_DIR)
PSDC_CPP_FLAGS  += -I$(PDC_DIR)

SRC_DIRS += $(LAND_COMMON_DIR)

CXXFLAGS += -DCONTROL_INCLUDE -DUSE_LOCAL_ERROR_HANDLING -I$(LAND_COMMON_DIR) -I$(CCDAQLIB_DIR) 
UCESB_CPP_FLAGS += -I$(LAND_COMMON_DIR) -I.

CXXFLAGS += -DUSE_CROS3_REWRITE
