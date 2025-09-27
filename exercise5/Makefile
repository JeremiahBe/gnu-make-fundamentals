#USing Phonhy
.PHONY: all clean test install help
CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = project_manager
$(TARGET): main.o project.o
	$(CXX) $(CXXFLAGS) main.o project.o -o $(TARGET) -Wl,-subsystem,console

main.o: main.cpp project.h
	$(CXX) $(CXXFLAGS) -c main.cpp

project.o: project.cpp project.h
	$(CXX) $(CXXFLAGS) -c project.cpp

all: $(TARGET)

# Target Setup
test:
	@echo "Running"
	@./$(TARGET)
	@echo "Completed!"

# Install target
install:
	@echo "Installing $(TARGET)..."
	@echo "Installated!"

clean:
	del $(TARGET).exe *.o 2>nul || rm -f $(TARGET) *.o

help:
	@echo "Available targets:"
	@echo "  all     - Build the project"
	@echo "  test    - Run tests"
	@echo "  install - Install the program"
	@echo "  clean   - Remove build files"
	@echo "  help    - Show this help"
