include ../config.inc
include ../../$(CPROVER_DIR)/src/config.inc
include ../../$(CPROVER_DIR)/src/common

all: ../../$(CPROVER_DIR)/src/java_bytecode/library/java_core_models.inc

clean: clean_library

.PHONY: clean_library
clean_library:
	$(MAKE) clean -C library

../../$(CPROVER_DIR)/src/java_bytecode/library/java_core_models.inc:
	$(MAKE) -C library ../../../$(CPROVER_DIR)/src/java_bytecode/library/java_core_models.inc
