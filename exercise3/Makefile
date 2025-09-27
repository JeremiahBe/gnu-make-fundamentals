# From the Hint
COMPILER = g++
FLAGS = -Wall -std=c++11
cd 
APP = string_program
SRC = main.cpp string_utils.cpp
OBJ = $(SRC:.cpp=.o)

all: $(APP)

$(APP): $(OBJ)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(APP)

%.o: %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

cleanup:
	del $(APP).exe *.o 2>nul || rm -f $(APP) *.o
