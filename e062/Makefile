# This makefile is needed when you make a copy of this directory
# (hacky/) and use it outside the unpacker/ structure (where the
# Makefile is within the unpacker/ directory itself.

#########################################################

# In case of problems compiling the parsers, ask them to be generated
# with bison instead of yacc (trouble on redhat / bsds) (uncomment
# below)

#YACC=bison
#export YACC

#########################################################

# If you want to always enforce the inclusion of the ntuple-generation
# and the watcher (daqscope) facility, you may use the following
# declarations.  (otherwise, they can also be done on the command line,
# prior to invoking make)

#USE_CERNLIB=1
#USE_CURSES=1

#export USE_CERNLIB
#export USE_CURSES

#########################################################
#
# use external Root-writer 
#

USE_EXT_WRITER=1
export USE_EXT_WRITER

#########################################################

# We still need access to the unpacker/ directory, since the ucesb and
# psdc programs are there, and since the common source also is there

TREE_OR_HOME_SRC_DIR = $(firstword $(wildcard $(addsuffix /$(1),$(shell pwd)/../.. $(HOME))))

UCESB_BASE_DIR=$(call TREE_OR_HOME_SRC_DIR,ucesb)
export UCESB_BASE_DIR

#########################################################

#CXX=g++-3.2
export CXX

#########################################################

# Our target, rename as needed

all: e062

#########################################################
# Submakefiles that the programs depend on

include $(UCESB_BASE_DIR)/makefile_ucesbgen.inc
include $(UCESB_BASE_DIR)/makefile_psdc.inc

DEPENDENCIES=$(UCESB) $(PSDC)

#########################################################

.PHONY: e062
e062: $(DEPENDENCIES)
	@$(MAKE) -f $(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$@ 

#########################################################

ext_e062.h: ./e062
	@echo "  E062   $@"
	@./e062 /dev/null --ntuple=UNPACK,RAW,STRUCT_HH,$@ 2> /dev/null

ext_reader_e062: ext_reader_e062.c ext_e062.h
	@echo "  BUILD  $@"
	@cc -o $@ -I . -I $(UCESB_BASE_DIR)/hbook/ \
	  $< $(UCESB_BASE_DIR)/hbook/ext_data_client.o

#########################################################

clean:
	$(MAKE) -f $(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=e062 clean
	rm -rf ext_reader_e062

all-clean: clean
	rm -rf gen
	rm -rf ext_e062.h

