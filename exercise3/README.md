## Exercise 3: GNU Make Variables Practice

### Objective
Use variables to make Makefiles maintainable and flexible.


### Task
Create a `Makefile` using variables for:
1. Compiler name (`CXX`)
2. Compiler flags (`CXXFLAGS`) - include `-Wall -std=c++11`
3. Target executable name (`TARGET`)
4. Object files list (`OBJECTS`)
5. Source files list (`SOURCES`)
6. Use these variables in your rules
7. Add `all` and `clean` targets

### Hint
Your Makefile should start with variable definitions like:
```makefile
CXX = g++
CXXFLAGS = -Wall -std=c++11
# ... more variables
```