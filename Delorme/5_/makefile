CXX=g++
LDFLAGS=
CXFLAGS=-Wall -Wextra -std=c++11 -I./include -g

BIN=./bin
OBJ=./obj
SRC=./src

DIRECTORY=bin obj include src
EXEC=TP5

all: prepare $(EXEC)

prepare: | $(DIRECTORY)

$(DIRECTORY): 
	mkdir -p $@

$(EXEC): $(OBJ)/main.o
	$(CXX) -o $(BIN)/$@ $^ $(CXFLAGS)

$(OBJ)/main.o: $(SRC)/main.cpp ./include/comparator.h ./include/heap.h
	$(CXX) -o $@ -c $< $(CXFLAGS)

clean:
	rm -rf $(OBJ) $(LIB)

properclean: clean
	rm -rf $(BIN)

.PHONY: all prepare directory clean properclean
