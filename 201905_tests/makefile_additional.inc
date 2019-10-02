USE_LMD_INPUT=1

LAND_COMMON_DIR = ./../land_common

DEPENDENCIES+=$(GENDIR)/mapping_fiber.hh

$(GENDIR)/mapping_fiber.hh: $(GENDIR)/mapper
	@echo " MAPPING $@"
	@./$(GENDIR)/mapper > $@ 2> /dev/null

$(GENDIR)/mapper: mapper/main.c
	@echo " MAPPER  $@"
	@gcc -Wshadow -o $@ $<
