.PHONY: all cprover.dir testing-utils.dir test

# Source files for test utilities
SRC = ../$(CPROVER_DIR)/unit/unit_tests.cpp \
      # Empty last line

# Test source files
SRC += ../$(CPROVER_DIR)/unit/unit_tests.cpp \
       # Empty last line

INCLUDES= -I ../src/ -I. -I ../$(CPROVER_DIR)/src/ -I ../$(CPROVER_DIR)/unit/

include ../src/config.inc
include ../$(CPROVER_DIR)/src/config.inc
include ../$(CPROVER_DIR)/src/common

cprover.dir:
	$(MAKE) $(MAKEARGS) -C ../src

testing-utils.dir:
	$(MAKE) $(MAKEARGS) -C ../$(CPROVER_DIR)/unit/testing-utils

CPROVER_LIBS =../$(CPROVER_DIR)/src/java_bytecode/java_bytecode$(LIBEXT) \
              ../$(CPROVER_DIR)/src/miniz/miniz$(OBJEXT) \
              ../$(CPROVER_DIR)/src/util/util$(LIBEXT) \
              ../$(CPROVER_DIR)/src/big-int/big-int$(LIBEXT) \
              ../$(CPROVER_DIR)/src/goto-programs/goto-programs$(LIBEXT) \
              ../$(CPROVER_DIR)/src/pointer-analysis/pointer-analysis$(LIBEXT) \
              ../$(CPROVER_DIR)/src/langapi/langapi$(LIBEXT) \
              ../$(CPROVER_DIR)/src/analyses/analyses$(LIBEXT) \
              ../$(CPROVER_DIR)/src/solvers/solvers$(LIBEXT) \
              # Empty last line

OBJ += $(CPROVER_LIBS) ../$(CPROVER_DIR)/unit/testing-utils/testing-utils$(LIBEXT)

TESTS = unit_tests$(EXEEXT) \
        # Empty last line

CLEANFILES = $(TESTS)

all: cprover.dir testing-utils.dir
	$(MAKE) $(MAKEARGS) $(TESTS)

test: all
	$(foreach test,$(TESTS), (echo Running: $(test); ./$(test)) &&) true


###############################################################################

unit_tests$(EXEEXT): $(OBJ)
	$(LINKBIN)
