# In case of problems compiling the parsers, ask them to be generated
# with bison instead of yacc (trouble on redhat / bsds) (uncomment
# below)
#YACC=bison
#export YACC

USE_CERNLIB=1
USE_CURSES=1

#export USE_CERNLIB
export USE_CURSES

TREE_OR_HOME_SRC_DIR = $(firstword $(wildcard $(addsuffix /$(1),$(shell pwd)/../.. $(HOME))))

UCESB_BASE_DIR=$(call TREE_OR_HOME_SRC_DIR,ucesb)
export UCESB_BASE_DIR

#CXX=g++-3.4
#export CXX

.PHONY: all
all: $(TARGET)

debug:
	@echo "UCSEB_BASE_DIR = $(UCESB_BASE_DIR)"

#########################################################
# Submakefiles that the programs depend on

include $(UCESB_BASE_DIR)/makefile_ucesbgen.inc
include $(UCESB_BASE_DIR)/makefile_psdc.inc

DEPENDENCIES=$(UCESB) $(PSDC) $(TARGET).spec

#########################################################

.PHONY: $(TARGET)
$(TARGET): $(DEPENDENCIES)
	@$(MAKE) -f $(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$(TARGET)

#########################################################

.PHONY: test
test: 
	$(MAKE) -f $(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$(TARGET) test

.PHONY: clean
clean:
	$(MAKE) -f $(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$(TARGET) clean

.PHONY: all-clean
all-clean: clean
	rm -rf gen
