# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -g

# Target executable
TARGET = calculator

# Object files
OBJS = main.o math_utils.o

# Rule to build the final program
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Compile main.cpp into main.o
main.o: main.cpp math_utils.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Compile math_utils.cpp into math_utils.o
math_utils.o: math_utils.cpp math_utils.h
	$(CXX) $(CXXFLAGS) -c math_utils.cpp

# Clean up build files
clean:
	del $(TARGET).exe *.o 2>nul || rm -f $(TARGET) *.o
