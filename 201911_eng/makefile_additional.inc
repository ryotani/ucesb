USE_LMD_INPUT=1

OBJS += 201911_eng_user.o

LAND_COMMON_DIR = ./../land_common

##
## For siderem_ext (common).
##
SST_DIR = $(UCESB_BASE_DIR)/dets/sst
$(eval $(call CHECK_DIRECTORY_EXIST,$(SST_DIR)))

include $(SST_DIR)/makefile_sst_ext.inc

INCLUDE_DIRS    += $(SST_DIR)
CXXFLAGS        += -I$(SST_DIR) -std=c++11
UCESB_CPP_FLAGS += -I$(SST_DIR)
PSDC_CPP_FLAGS  += -I$(SST_DIR)

SRC_DIRS += $(LAND_COMMON_DIR)

CXXFLAGS += -DCONTROL_INCLUDE -I$(LAND_COMMON_DIR)

DEPENDENCIES+=$(GENDIR)/mapping_fiber.hh

$(GENDIR)/mapping_fiber.hh: $(GENDIR)/mapper
	@echo " MAPPING $@"
	@./$(GENDIR)/mapper > $@ 2> /dev/null

$(GENDIR)/mapper: mapper/fib1.c
	@echo " MAPPER  $@"
	@gcc -Wshadow -o $@ $<
