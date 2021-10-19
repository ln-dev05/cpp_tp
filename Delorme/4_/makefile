# Author : ismaël Delorme
# Copyright ENSICAEN
# Date: 19-10-2021

CXX=g++
CXXFLAGS=-Wall -Wextra -ansi -pedantic -std=c++11 -I./include -g

LIB=./lib
BIN=./bin
OBJ=./obj
SRC=./src
INC=./include

SRC_FILE = $(wildcard $(SRC)/*.cpp)
OBJ_FILE = $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRC_FILE))
HEADER_FILE = $(wildcard $(INC)/*.h)

DIRECTORY=bin obj include src
EXEC=sieve

all: prepare $(EXEC)

prepare: | $(DIRECTORY) FILE

$(DIRECTORY): 
	mkdir -p $@

FILE:
	touch file.txt
	touch README.md

$(EXEC): $(OBJ_FILE)
	$(CXX) -o $(BIN)/$@ $^ $(CXXFLAGS)

$(OBJ)/%.o: $(SRC)/%.cpp $(HEADER_FILE)
	$(CXX) -o $@ -c $< $(CXXFLAGS)

clean:
	rm -rf $(OBJ) $(LIB)

properclean: clean
	rm -rf $(BIN)

archive: properclean
	find . -type f > file.txt
	tar -cvf "$(EXEC)_isma.tar.gz" *

.PHONY: all prepare directory file clean properclean
