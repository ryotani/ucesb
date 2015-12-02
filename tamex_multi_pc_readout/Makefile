UCESB_BASE_DIR=../../unpacker

TARGET:=tamex_multi_pc_readout

.PHONY: all clean

all: mapping.h $(TARGET)

mapping.h: mappingNeuland.txt
	@echo " MAPPING " $@
	@./make_mapping.sh > $@

$(TARGET):
	@$(MAKE) -C . -f $(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$(TARGET) UCESB_BASE_DIR=$(UCESB_BASE_DIR)

clean:
	@$(MAKE) -C . -f $(UCESB_BASE_DIR)/makefile_unpacker.inc UNPACKER=$(TARGET) UCESB_BASE_DIR=$(UCESB_BASE_DIR) clean
	rm -rf mapping.h
