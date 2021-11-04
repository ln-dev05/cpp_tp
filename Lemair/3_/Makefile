BIN_PATH :=./bin
SRC_PATH :=./src
OBJ_PATH :=./obj
INC_PATH :=./inc

CXX      := g++
CXXFLAGS := -g -Wall -pedantic -Wextra --std=c++11 -fno-elide-constructors

OBJS := $(OBJ_PATH)/main.o $(OBJ_PATH)/Matrix.o

EXEC = tp3

.PHONY: all clean MAKE_DIR cl

all: MAKE_DIR $(BIN_PATH)/$(EXEC)

$(OBJ_PATH)/Matrix.o: $(SRC_PATH)/Matrix.cpp $(INC_PATH)/Matrix.h
	$(CXX) $< -c -o $@ -I$(INC_PATH)
	
$(OBJ_PATH)/main.o: $(SRC_PATH)/main.cpp $(INC_PATH)/Matrix.h
	$(CXX) $< -c -o $@ -I$(INC_PATH)

$(BIN_PATH)/$(EXEC): $(OBJS)
	$(CXX) -o $@ $^ 

MAKE_DIR:
	@test -d ./bin || mkdir -p ./bin
	@test -d ./obj || mkdir -p ./obj

cl:clean
clean: clean_obj
	rm -rf ./bin/
clean_obj:
	rm -rf ./obj/


