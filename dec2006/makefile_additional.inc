# -*- Makefile -*-

USE_LMD_INPUT=1

OBJS += dec2006_user.o dec2006_user_ap.o land_fcns.o


# For the auto-pedestal-adjustment from ccdaqlib
CCDAQLIB_DIR=$(call TREE_UCESB_OR_HOME_SRC_DIR_OR_DIE,landdaq/ccdaqlib)

# For the common land directory
LAND_COMMON_DIR = ./../land_common

CXXFLAGS += -DCONTROL_INCLUDE  -DUSE_LOCAL_ERROR_HANDLING  -I$(LAND_COMMON_DIR) -I$(CCDAQLIB_DIR)
UCESB_CPP_FLAGS += -I$(LAND_COMMON_DIR) -I.
