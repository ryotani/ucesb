# This Makefile is for software maintenance to test-build all
# experiment directories.  Users most likely just want to build the
# experiment they are interested in.

# Don't add any options in this Makefile, as they should go in each
# experiment directory!

#########################################################

all: others land_common 

others: e062 frs_s341 rpc2009 tacquila17 uppsala fzd_jan_2010

land_common: land s223 s232 s287 s295 s296 \
	s306 s318 s327 s393 \
	s406 s408 s412 s438 s438b\
	dec2006

# rpc2006 is BROKEN!  It has its own old copy of the unpacker...
# x2007 is a land02-experiment directory
# s223_march does for some reason not hack the dependency stage

#########################################################

# To be able to build in parallel, we must first ensure that any
# common dependencies are built, as each separate make invocation will
# not know about its cousins trying to rebuild the same prerequisite
# simultaneously.  Easiest is to just compile e.g. the 'empty'
# unpacker

TREE_OR_HOME_SRC_DIR = $(firstword $(wildcard $(addsuffix /$(1),$(shell pwd)/.. $(HOME))))

UCESB_BASE_DIR=$(call TREE_OR_HOME_SRC_DIR,unpacker)

empty_unpacker:
	$(MAKE) -C $(UCESB_BASE_DIR) empty

#########################################################

e062: empty_unpacker
	$(MAKE) -C $@

frs_s341: empty_unpacker
	$(MAKE) -C $@

rpc2009: empty_unpacker
	$(MAKE) -C $@

land: empty_unpacker
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

uppsala: empty_unpacker
	$(MAKE) -C $@

fzd_jan_2010: empty_unpacker
	$(MAKE) -C $@

#########################################################

clean:
	$(MAKE) -C e062 clean
	$(MAKE) -C frs_s341 clean
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
	$(MAKE) -C tacquila17 clean
	$(MAKE) -C uppsala clean
	$(MAKE) -C fzd_jan_2010 clean

#########################################################
