USE_LMD_INPUT=1

OBJS += 201902_s473_user.o

LAND_COMMON_DIR = ./../land_common

#
# For siderem_ext (common).
#
SST_DIR = $(UCESB_BASE_DIR)/dets/sst
$(eval $(call CHECK_DIRECTORY_EXIST,$(SST_DIR)))

include $(SST_DIR)/makefile_sst_ext.inc

INCLUDE_DIRS    += $(SST_DIR)
CXXFLAGS        += -I$(SST_DIR) -std=c++11
UCESB_CPP_FLAGS += -I$(SST_DIR)
PSDC_CPP_FLAGS  += -I$(SST_DIR)

SRC_DIRS += $(LAND_COMMON_DIR)

CXXFLAGS += -DCONTROL_INCLUDE -I$(LAND_COMMON_DIR)

DEPENDENCIES+=$(GENDIR)/mapping_fiber.hh $(GENDIR)/mapping_tofd.hh mapping_neuland.h

$(GENDIR)/mapping_fiber.hh: $(GENDIR)/mapper $(GENDIR)/fib3
	@echo " MAPPING $@"
	@./$(GENDIR)/mapper > $@ 2> /dev/null
	@./$(GENDIR)/fib3 >> $@ 2> /dev/null

$(GENDIR)/mapping_tofd.hh: mapping_tofd_gen.bash 
	@echo " MAPPING $@"
	@./$< > $@

$(GENDIR)/mapper: mapper/main.c
	@echo " MAPPER  $@"
	@gcc -Wshadow -o $@ $<

$(GENDIR)/fib3: mapper/fib3.c
	@echo " FIB3  $@"
	@gcc -Wshadow -o $@ $<
