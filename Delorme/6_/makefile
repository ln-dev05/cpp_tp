# Author : isma
# Copyright ENSICAEN
# Date: 26-11-2021

CXX=g++
CXXFLAGS=-Wall -Wextra -ansi -pedantic -std=c++11 -I./include -g

INC=./include
BIN=./bin
OBJ=./obj
SRC=./src

SRC_FILE = $(wildcard $(SRC)/*.cpp)
OBJ_FILE = $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRC_FILE))

DIRECTORY=bin obj include src
EXEC=iterator vector priorityQueue map algorithmes

all: prepare $(EXEC)

prepare: | $(DIRECTORY)

$(DIRECTORY): 
	mkdir -p $@

iterator: $(OBJ)/iterator.o $(OBJ)/_iteratorFunction.o $(INC)/_iteratorFunction.hpp
	$(CXX) -o $(BIN)/$@ $^ $(CXXFLAGS)

vector: $(OBJ)/vector.o
	$(CXX) -o $(BIN)/$@ $^ $(CXXFLAGS)

priorityQueue: $(OBJ)/priorityQueue.o $(OBJ)/_iteratorFunction.o $(INC)/_iteratorFunction.hpp
	$(CXX) -o $(BIN)/$@ $^ $(CXXFLAGS)

map: $(OBJ)/map.o
	$(CXX) -o $(BIN)/$@ $^ $(CXXFLAGS)

algorithmes: $(OBJ)/algorithmes.o $(OBJ)/_iteratorFunction.o $(INC)/_iteratorFunction.hpp $(INC)/algorithmes.hpp
	$(CXX) -o $(BIN)/$@ $^ $(CXXFLAGS)

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS)

clean:
	rm -rf $(OBJ) $(LIB)

properclean: clean
	rm -rf $(BIN)

.PHONY: all prepare directory file clean properclean
