#########################################################
# Specify the name of the target executable

TARGETS:=e062

USE_EXT_WRITER=1
export USE_EXT_WRITER

#########################################################
# Include common Makefile

include ../makefile_common.mk

#########################################################

all: ext_reader_e062

ext_e062.h: e062
	@echo "  E062   $@"
	@./e062 /dev/null --ntuple=UNPACK,RAW,STRUCT_HH,$@ 2> /dev/null

ext_reader_e062: ext_reader_e062.c ext_e062.h
	@echo "  BUILD  $@"
	$(QUIET)$(CC) -o $@ -I . -I $(UCESB_BASE_DIR)/hbook/ \
	  $< $(UCESB_BASE_DIR)/hbook/ext_data_client.o

clean:
	rm -rf ext_reader_e062
	rm -rf ext_e062.h
