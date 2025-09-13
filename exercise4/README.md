## Exercise 4: GNU Make Functions Practice

### Objective
Use Make functions to automate file lists and pattern matching.

### Task
Create a `Makefile` that uses Make functions:
1. Use `wildcard` function to automatically find all `.cpp` files
2. Use `patsubst` function to convert `.cpp` files to `.o` files
3. Use `basename` or `notdir` to create the target name
4. Include variables from Exercise 3
5. Add a `debug` target that compiles with `-g -DDEBUG` flags
6. Add `all`, `clean`, and `help` targets

### Functions to Use
```makefile
SOURCES = $(wildcard *.cpp)
OBJECTS = $(patsubst %.cpp,%.o,$(SOURCES))
# Or: OBJECTS = $(SOURCES:.cpp=.o)
```


### Expected Features
- Automatic source file detection
- Debug build option
- Help target showing available commands
- Clean build capability