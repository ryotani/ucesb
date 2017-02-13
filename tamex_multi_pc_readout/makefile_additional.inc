# -*- Makefile -*-

USE_LMD_INPUT=1
DEPENDENCIES+=mapping.h

mapping.h: mappingNeuland.txt
	@echo " MAPPING " $@
	@./make_mapping.sh > $@

