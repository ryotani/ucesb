
# In case of problems compiling the parsers, ask them to be generated
# with bison instead of yacc (trouble on redhat / bsds) (uncomment
# below)
#YACC=bison
#export YACC

USE_CERNLIB=1
USE_CURSES=1

export USE_CERNLIB
export USE_CURSES

TREE_OR_HOME_SRC_DIR = $(firstword $(wildcard $(addsuffix /$(1),$(shell pwd)/../.. $(HOME))))

UCESB_BASE_DIR=$(call TREE_OR_HOME_SRC_DIR,unpacker)
export UCESB_BASE_DIR

#CXX=g++-3.2
export CXX

#########################################################

all: s232

#########################################################
# Submakefiles that the programs depend on

include $(UCESB_BASE_DIR)/makefile_ucesb.inc
include $(UCESB_BASE_DIR)/makefile_psdc.inc

DEPENDENCIES=$(UCESB) $(PSDC)

#########################################################

.PHONY: s232
s232: $(DEPENDENCIES)
	@$(MAKE) -f $(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$@ 

#########################################################

clean:
	$(MAKE) -f $(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=s232 clean

all-clean: clean
	rm -rf gen

