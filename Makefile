# This Makefile is for software maintenance to test-build all
# experiment directories.  Users most likely just want to build the
# experiment they are interested in.

# Don't add any options in this Makefile, as they should go in each
# experiment directory!

#########################################################

TREE_OR_HOME_SRC_DIR = $(firstword $(wildcard $(addsuffix /$(1),$(shell pwd)/.. $(HOME))))
UCESB_BASE_DIR=$(call TREE_OR_HOME_SRC_DIR,ucesb)
export UCESB_BASE_DIR

include $(UCESB_BASE_DIR)/makefile_direxist.inc

#########################################################

LAND_COMMON=land jun16 \
	s232 s287 s295 \
	s438 s438b
OTHERS= e062 \
	frs_s341 \
	fzd_jan_2010 \
	gamma3_2015 \
	rpc2009 \
	tacquila17 \
	tamex_multi_pc_readout \
	uppsala

# Some experiments need the landdaq_ dir to be present
LANDDAQ_DIR:=$(call TREE_UCESB_OR_HOME_SRC_DIR,landdaq_)
ifeq (,$(LANDDAQ_DIR))
$(info No 'landdaq_' directory found)
else
$(info LANDDAQ_DIR=$(LANDDAQ_DIR))
NEED_LANDDAQ=
endif

# Some experiments need the landdaq/ccdaqlib dir to be present
CCDAQLIB_DIR:=$(call TREE_UCESB_OR_HOME_SRC_DIR,landdaq/ccdaqlib)
ifeq (,$(CCDAQLIB_DIR))
$(info No 'landdaq/ccdaqlib' directory found)
else
ifneq (,$(LANDDAQ_DIR))
NEED_LANDDAQ_AND_CCDAQLIB=s223 s296 s306 s318 s327 s393 s406
endif
$(info CCDAQLIB_DIR=$(CCDAQLIB_DIR))
NEED_CCDAQLIB=dec2006
endif

NEED_LANDDAQ_= $(NEED_LANDDAQ) $(NEED_CCDAQLIB) $(NEED_LANDDAQ_AND_CCDAQLIB)

BROKEN=s223_march s408 s412

# s223_march does for some reason not hack the dependency stage
# s408, s412 need int_correlation

ALL_EXPS=$(OTHERS) $(LAND_COMMON) $(NEED_LANDDAQ_)

#########################################################
# Rules for building experiments

.PHONY: all
all: build

#########################################################

# To be able to build in parallel, we must first ensure that any
# common dependencies are built, as each separate make invocation will
# not know about its cousins trying to rebuild the same prerequisite
# simultaneously.  Easiest is to just compile e.g. the 'empty'
# unpacker

empty_unpacker:
	+$(MAKE) -C $(UCESB_BASE_DIR) empty

#########################################################

define build_unpacker

.PHONY: $(1)
$(1): build_$(1)

.PHONY: build_$(1)
build_$(1): empty_unpacker
	$$(MAKE) -C $(1)

.PHONY: clean_$(1)
clean_$(1):
	$$(MAKE) -C $(1) clean

endef

$(foreach target,$(ALL_EXPS),$(eval $(call build_unpacker,$(target))))

BUILD_TARGETS=$(addprefix build_,$(ALL_EXPS))
CLEAN_TARGETS=$(addprefix clean_,$(ALL_EXPS))

#########################################################

.PHONY: build
build: $(BUILD_TARGETS)

.PHONY: clean
clean: $(CLEAN_TARGETS)

#########################################################
