CC=g++
CCFLAGS=-Wall -Wextra -ansi -pedantic -std=c++11 -g -I./include -fno-elide-constructors

BIN=./bin
OBJ=./obj
SRC=./src
INC=./include

EXEC=TP2

all: MAKE_DIR $(EXEC)

$(EXEC): $(OBJ)/main.o $(OBJ)/rational.o $(INC)/rational.h
	$(CC) -o $(BIN)/$@ $^ $(LDFLAGS)

$(OBJ)/main.o: $(SRC)/main.cpp $(INC)/rational.h
	$(CC) -o $@ -c $< $(CCFLAGS)

$(OBJ)/rational.o: $(SRC)/rational.cpp $(INC)/rational.h
	$(CC) -o $@ -c $< $(CCFLAGS)


MAKE_DIR:
	@mkdir -p $(BIN)
	@mkdir -p $(OBJ)

clean:
	rm -rf $(OBJ) $(LIB)

properclean: clean
	rm -rf $(BIN)

.PHONY: all MAKE_DIR clean properclean
