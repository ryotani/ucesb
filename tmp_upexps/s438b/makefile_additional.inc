# -*- Makefile -*-

USE_LMD_INPUT=1

OBJS += land_fcns.o

LAND_COMMON_DIR = ./../land_common
SRC_DIRS += $(LAND_COMMON_DIR)

UCESB_CPP_FLAGS += -I. -DUSING_MULTI_EVENTS

DEPENDENCIES+=$(GENDIR)/mapping_neuland.hh

$(GENDIR)/mapping_neuland.hh: cfg_neuland_s438b.hh sigbeam2signal.sh
	@echo " MAPPING $@"
	@./sigbeam2signal.sh cfg_neuland_s438b.hh > $@

DEPENDENCIES+=$(GENDIR)/mapping_neuland_tamex.hh

$(GENDIR)/mapping_neuland_tamex.hh: cfg_neuland_tamex_s438b.hh sigbeam2signal_neuland_tamex.sh
	@echo " MAPPING $@"
	@./sigbeam2signal_neuland_tamex.sh cfg_neuland_tamex_s438b.hh > $@

