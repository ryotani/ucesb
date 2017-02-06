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

all: all_exps

others: e062 \
	frs_s341 \
	fzd_jan_2010 \
	gamma3_2015 \
	rpc2009 \
	tacquila17 \
	tamex_multi_pc_readout \
	uppsala

land_common: land jun16 \
	s232 s287 s295 \
	s438 s438b

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

BROKEN=s223_march s408 s412

need_landdaq_: $(NEED_LANDDAQ) $(NEED_CCDAQLIB) $(NEED_LANDDAQ_AND_CCDAQLIB)

all_exps: others land_common need_landdaq_

# rpc2006 is BROKEN!  It has its own old copy of the unpacker...
# x2007 is a land02-experiment directory
# s223_march does for some reason not hack the dependency stage
# s408, s412 need int_correlation

#########################################################

# To be able to build in parallel, we must first ensure that any
# common dependencies are built, as each separate make invocation will
# not know about its cousins trying to rebuild the same prerequisite
# simultaneously.  Easiest is to just compile e.g. the 'empty'
# unpacker


empty_unpacker:
	$(MAKE) -C $(UCESB_BASE_DIR) empty

#########################################################

e062: empty_unpacker
	$(MAKE) -C $@

frs_s341: empty_unpacker
	$(MAKE) -C $@

fzd_jan_2010: empty_unpacker
	$(MAKE) -C $@

land: empty_unpacker
	$(MAKE) -C $@

jun16: empty_unpacker
	$(MAKE) -C $@

gamma3_2015: empty_unpacker
	$(MAKE) -C $@

rpc2009: empty_unpacker
	$(MAKE) -C $@

s223: empty_unpacker
	$(MAKE) -C $@

s223_march: empty_unpacker
	$(MAKE) -C $@

s232: empty_unpacker
	$(MAKE) -C $@

s287: empty_unpacker
	$(MAKE) -C $@

s295: empty_unpacker
	$(MAKE) -C $@

s296: empty_unpacker
	$(MAKE) -C $@

s306: empty_unpacker
	$(MAKE) -C $@

s318: empty_unpacker
	$(MAKE) -C $@

s327: empty_unpacker
	$(MAKE) -C $@

s393: empty_unpacker
	$(MAKE) -C $@

s406: empty_unpacker
	$(MAKE) -C $@

s408: empty_unpacker
	$(MAKE) -C $@

s412: empty_unpacker
	$(MAKE) -C $@

s438: empty_unpacker
	$(MAKE) -C $@

s438b: empty_unpacker
	$(MAKE) -C $@

dec2006: empty_unpacker
	$(MAKE) -C $@

tacquila17: empty_unpacker
	$(MAKE) -C $@

tamex_multi_pc_readout: empty_unpacker
	$(MAKE) -C $@

uppsala: empty_unpacker
	$(MAKE) -C $@

#########################################################

clean:
	$(MAKE) -C e062 clean
	$(MAKE) -C frs_s341 clean
	$(MAKE) -C gamma3_2015 clean
	$(MAKE) -C rpc2009 clean
	$(MAKE) -C land clean
	$(MAKE) -C s223 clean
	$(MAKE) -C s223_march clean
	$(MAKE) -C s232 clean
	$(MAKE) -C s287 clean
	$(MAKE) -C s295 clean
	$(MAKE) -C s296 clean
	$(MAKE) -C s306 clean
	$(MAKE) -C s318 clean
	$(MAKE) -C s327 clean
	$(MAKE) -C s393 clean
	$(MAKE) -C s406 clean
	$(MAKE) -C s408 clean
	$(MAKE) -C s412 clean
	$(MAKE) -C s438 clean
	$(MAKE) -C s438b clean
	$(MAKE) -C dec2006 clean
	$(MAKE) -C jun16 clean
	$(MAKE) -C tacquila17 clean
	$(MAKE) -C tamex_multi_pc_readout clean
	$(MAKE) -C uppsala clean
	$(MAKE) -C fzd_jan_2010 clean

#########################################################
