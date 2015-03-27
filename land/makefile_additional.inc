# -*- Makefile -*-

USE_LMD_INPUT=1

OBJS += land_fcns.o


# For the auto-pedestal-adjustment from ccdaqlib

CCDAQLIB_DIR=$(HOME)/landdaq/ccdaqlib

CXXFLAGS += -DCONTROL_INCLUDE  -DUSE_LOCAL_ERROR_HANDLING -I$(CCDAQLIB_DIR)
