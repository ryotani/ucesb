# In case of problems compiling the parsers, ask them to be generated
# with bison instead of yacc (trouble on redhat / bsds) (uncomment
# below)
#YACC=bison
#export YACC

USE_CERNLIB=1
USE_CURSES=1

#export USE_CERNLIB
export USE_CURSES

# This makefile is expected to be included from a makefile that is in
# a directory one level below upexps/.  Thus ../../ would reach
# siblings of upexps/ - i.e. just outside.

TREE_OR_HOME_SRC_DIR = $(firstword $(wildcard $(addsuffix /$(1),$(shell pwd)/../.. $(HOME))))

UCESB_BASE_DIR=$(call TREE_OR_HOME_SRC_DIR,ucesb)
export UCESB_BASE_DIR

#CXX=g++-3.4
#export CXX

.PHONY: all
all: build

#########################################################
# Submakefiles that the programs depend on

include $(UCESB_BASE_DIR)/makefile_ucesbgen.inc
include $(UCESB_BASE_DIR)/makefile_psdc.inc

#########################################################

define build_rules

DEPENDENCIES=$(UCESB) $(PSDC) $(1).spec

$(1): build_$(1)

.PHONY: build_$(1)
build_$(1): $$(DEPENDENCIES)
	@$$(MAKE) -f $$(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$(1)

.PHONY: test_$(1)
test_$(1): 
	$$(MAKE) -f $$(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$(1) test

.PHONY: clean_$(1)
clean_$(1):
	$$(MAKE) -f $$(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$(1) clean

endef

$(foreach target,$(TARGETS),$(eval $(call build_rules,$(target))))

BUILD_TARGETS=$(addprefix build_,$(TARGETS))
TEST_TARGETS=$(addprefix test_,$(TARGETS))
CLEAN_TARGETS=$(addprefix clean_,$(TARGETS))

$(info clean=$(CLEAN_TARGETS))

.PHONY: build
build: $(BUILD_TARGETS)

.PHONY: test
test: $(TEST_TARGETS)

.PHONY: clean
clean: $(CLEAN_TARGETS)

debug:
	@echo "UCSEB_BASE_DIR = $(UCESB_BASE_DIR)"
