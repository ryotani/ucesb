# -*- Makefile -*-

USE_LMD_INPUT=1

//USER_STRUCT_FILE = sis3316_async_user_struct.hh
CXXFLAGS+=-DCONTROL_INCLUDE -Wfatal-errors

OBJS += xb2017_user.o

