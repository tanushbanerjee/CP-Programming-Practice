CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra -pedantic -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wshift-overflow=2 -Wduplicated-cond -Wcast-qual -Wcast-align -Wno-unused-result -Wno-sign-conversion
DEBUGFLAGS = -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -fsanitize=address -fsanitize=undefined -fno-sanitize-recover=all -fstack-protector -D_FORTIFY_SOURCE=2

DEBUG = true
ifeq ($(DEBUG),true)
	CXXFLAGS += $(DEBUGFLAGS)
endif

TARGET := sol
EXECUTE := ./$(TARGET)
CLEAN_TARGETS := $(TARGET)

#TARGET := problem_name.py
#EXECUTE := python3 ./$(TARGET)
#CLEAN_TARGETS :=

CASES := $(sort $(basename $(wildcard *.in)))
TESTS := $(sort $(basename $(wildcard *.out)))

all: $(TARGET)

clean:
	-rm -rf $(CLEAN_TARGETS) *.res

%: %.cpp
	$(LINK.cpp) $< $(LOADLIBES) $(LDLIBS) -o $@

export TIME=\n  real\t%es\n  user\t%Us\n  sys\t%Ss\n  mem\t%MKB

run: $(TARGET)
	\time $(EXECUTE)

%.res: $(TARGET) %.in
	\time $(EXECUTE) < $*.in > $*.res
ifeq ($(DEBUG),true)
	@echo "Built with DEBUG flags enabled, code may be slower than normal"
endif

%.out: % # Cancel the builtin rule

__test_%: %.res %.out
	diff $*.res $*.out

runs: $(patsubst %,%.res,$(CASES))

solve: runs

test: $(patsubst %,__test_%,$(TESTS))

.PHONY: all clean run test __test_% runs solve

.PRECIOUS: %.res

