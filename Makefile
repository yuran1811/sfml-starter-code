CXX       		:= g++
CXX_FLAGS 		:= -std=c++17 -ggdb

# SFML Libs: 	[-lsfml-system -lsfml-window -lsfml-network -lsfml-graphics -lsfml-audio -lsfml-main]
SFML_LIBS 		:= -lsfml-system -lsfml-window -lsfml-graphics

BIN       		:= bin
INCLUDE   		:= include
LIBS      		:= libs
SRC       		:= src

SRCS 			:= $(wildcard $(SRC)/utils/*.cpp $(SRC)/shared/*.cpp $(SRC)/components/*.cpp $(SRC)/*.cpp)
OBJS 			:= $(SRCS:.cpp=.o)

# Executable name
TARGET 			:= main

# Default target
all: $(BIN)/$(TARGET)

# Rule to build the executable
$(BIN)/$(TARGET): $(OBJS)
	$(CXX) $(CXX_FLAGS) $(OBJS) -o ./$(BIN)/$(TARGET) -L$(LIBS) -I$(INCLUDE) $(SFML_LIBS)

# Rule to build object files
%.o: %.cpp
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJS) ./$(BIN)/$(TARGET)

run: clean all
	./$(BIN)/$(TARGET) && make clean
