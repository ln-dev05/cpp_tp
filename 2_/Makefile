BIN_PATH :=./bin
SRC_PATH :=./src
OBJ_PATH :=./obj
INC_PATH :=-I./inc 

CXX      := g++
CXXFLAGS :=  -g -Wall -pedantic -Wextra --std=c++11

SRCS = $(wildcard $(SRC_PATH)/*.cpp) 
OBJS = $(patsubst $(SRC_PATH)/%.cpp, $(OBJ_PATH)/%.o, $(SRCS))

EXEC = tp2

.PHONY: all clean MAKE_DIR
all: MAKE_DIR $(BIN_PATH)/$(EXEC)

$(BIN_PATH)/$(EXEC): $(OBJS)
	$(CXX) -o $@ $^ 

MAKE_DIR:
	@test -d ./bin || mkdir -p ./bin
	@test -d ./obj || mkdir -p ./obj

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.cpp
	$(CXX) -o $@ $^ -c $(CXXFLAGS) $(INC_PATH)

clean: clean_obj
	rm -rf ./bin/*
clean_obj:
	rm -rf ./obj/*


