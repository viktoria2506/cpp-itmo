CXX := g++

DIR := out
SOURCES := $(DIR)/hello.o $(DIR)/here.o $(DIR)/bye.o

all: $(DIR)/main

$(DIR)/main: $(DIR)/main.o $(DIR)/myLib.a | $(DIR)
	$(CXX) -o $@ $^

$(DIR)/%.o: %.cpp myLib.h | $(DIR)
	$(CXX) -c -o $@ $<

$(DIR)/myLib.a: $(SOURCES) | $(DIR)
	ar cr $@ $^

$(DIR):
	mkdir -p $(DIR)

.PHONY: clean

clean:
	rm -rf $(DIR)