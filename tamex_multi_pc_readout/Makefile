TARGET:=tamex_multi_pc_readout

TREE_OR_HOME_SRC_DIR = $(firstword $(wildcard $(addsuffix /$(1),$(shell pwd)/../.. $(HOME))))

UCESB_BASE_DIR=$(call TREE_OR_HOME_SRC_DIR,ucesb)
export UCESB_BASE_DIR

.PHONY: all clean

all: mapping.h $(TARGET)

mapping.h: mappingNeuland.txt
	@echo " MAPPING " $@
	@./make_mapping.sh > $@

include $(UCESB_BASE_DIR)/makefile_ucesbgen.inc
include $(UCESB_BASE_DIR)/makefile_psdc.inc

DEPENDENCIES=$(UCESB) $(PSDC)

.PHONY: $(TARGET)
$(TARGET): $(DEPENDENCIES)
	@$(MAKE) -C . -f $(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$(TARGET) UCESB_BASE_DIR=$(UCESB_BASE_DIR)

clean:
	@$(MAKE) -C . -f $(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$(TARGET) UCESB_BASE_DIR=$(UCESB_BASE_DIR) clean
	rm -rf mapping.h
