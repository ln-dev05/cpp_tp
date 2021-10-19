CXX=g++
CXXFLAGS=-Wall -Wextra -std=c++11 -I./include -g

BIN=./bin
OBJ=./obj
SRC=./src
INC=./include

SRC_FILE = $(wildcard $(SRC)/*.c)
OBJ_FILE = $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRC_FILE))

EXEC=TP3

all: DIRECTORY $(EXEC)

DIRECTORY: 
	mkdir -p $(BIN)
	mkdir -p $(OBJ)

$(OBJ)/matrix.o : $(SRC)/matrix.cpp $(INC)/matrix.h
	$(CXX) -o $@ -c $< $(CXXFLAGS)

$(OBJ)/main.o : $(SRC)/main.cpp  $(INC)/matrix.h
	$(CXX) -o $@ -c $< $(CXXFLAGS)

$(EXEC) : $(OBJ)/main.o $(OBJ)/matrix.o $(INC)/matrix.h
	$(CXX) -o $(BIN)/$@ $^ $(CXXFLAGS)

clean:
	rm -rf $(OBJ) $(LIB)

properclean: clean
	rm -rf $(BIN)

.PHONY: all   fileclean properclean
