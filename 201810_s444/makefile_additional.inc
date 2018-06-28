USE_LMD_INPUT=1

LAND_COMMON_DIR = ./../land_common

SRC_DIRS += $(LAND_COMMON_DIR)

CXXFLAGS += -I$(LAND_COMMON_DIR)

DEPENDENCIES+=$(GENDIR)/mapping_tofd.hh

$(GENDIR)/mapping_tofd.hh: mapping_tofd_gen.bash 
	@echo " MAPPING $@"
	@./$< > $@
