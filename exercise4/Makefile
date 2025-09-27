#Hint Given
SRC_FILES  = $(wildcard *.cpp)
OBJ_FILES  = $(patsubst %.cpp,%.o,$(SRC_FILES))
APPNAME    = $(notdir $(CURDIR))
COMPILER   = g++
FLAGS      = -Wall -std=c++11


all: $(APPNAME)

$(APPNAME): $(OBJ_FILES)
	$(COMPILER) $(FLAGS) $(OBJ_FILES) -o $(APPNAME)

%.o: %.cpp
	$(COMPILER) $(FLAGS) -c $< -o $@

debug: FLAGS += -DDEBUG
debug: clean $(APPNAME)

clean:
	del $(APPNAME).exe *.o 2>nul || rm -f $(APPNAME) *.o

# Help Section
help:
	@echo "make        -> Build program"
	@echo "make debug  -> Build with DEBUG flag"
	@echo "make clean  -> Remove .exe and .o files"
	@echo "make help   -> Show this message"

