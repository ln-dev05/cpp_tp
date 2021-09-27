# Author : isma
# Copyright ENSICAEN
# Date: 21-09-2021

CC=g++
LDFLAGS=
CCFLAGS=-Wall -Wextra -ansi -pedantic -std=c++11 -I./include -g
CPPFLAGS=

LIB=./lib
BIN=./bin
OBJ=./obj
SRC=./src

SRC_FILE = $(wildcard $(SRC)/*.cpp)
OBJ_FILE = $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRC_FILE))

DIRECTORY=misc lib bin obj include src
EXEC=TP2

all: prepare $(EXEC)

prepare: | $(DIRECTORY)

$(DIRECTORY): 
	mkdir -p $@
	touch file.txt
	touch README.md

$(EXEC): $(OBJ_FILE)
	$(CC) -o $(BIN)/$@ $^ $(CCFLAGS)

$(OBJ)/%.o: $(SRC)/%.cpp
	$(CC) -o $@ -c $< $(CCFLAGS)

clean:
	rm -rf $(OBJ) $(LIB)

properclean: clean
	rm -rf $(BIN)

archive: properclean
	find . -type f > file.txt
	tar -cvf "$(EXEC)_isma.tar.gz" *

.PHONY: all prepare directory file clean properclean
