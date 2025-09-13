## Exercise 5: .PHONY Targets Practice

### Objective
Understand when and why to use `.PHONY` targets to avoid conflicts with files.

### Files Provided
**main.cpp**
```cpp
#include "project.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Project Manager v1.0" << endl;
    run_tests();
    show_info();
    return 0;
}
```

**project.h**
```cpp
#ifndef PROJECT_H
#define PROJECT_H

void run_tests();
void show_info();

#endif
```

**project.cpp**
```cpp
#include "project.h"
#include <iostream>

void run_tests() {
    std::cout << "Running unit tests... PASSED" << std::endl;
}

void show_info() {
    std::cout << "Build: Debug" << std::endl;
    std::cout << "Version: 1.0.0" << std::endl;
}
```

**test** (empty file - create this file in your directory)

**install** (empty file - create this file in your directory)

### Task
Create a `Makefile` that demonstrates `.PHONY` targets:

1. Create these targets: `all`, `clean`, `test`, `install`, `help`
2. **Don't** declare any as `.PHONY` initially
3. Test what happens when you run `make test` and `make install`
4. Add `.PHONY` declarations and test again
5. Add a `debug` and `release` build targets
6. Use variables for compiler and flags

### Expected Issues Without .PHONY
Since files named `test` and `install` exist in your directory:
- `make test` will say "target is up to date"
- `make install` will say "target is up to date"
- These commands won't execute their recipes

### Task Steps
1. **Step 1**: Create Makefile without `.PHONY` declarations
2. **Step 2**: Test `make test` and `make install` - observe the problem
3. **Step 3**: Add `.PHONY` declarations at the top
4. **Step 4**: Test again - commands should now work

### What is .PHONY?
`.PHONY` tells Make that these targets don't represent actual files:
- **Without .PHONY**: Make checks if a file with the target name exists and is up-to-date
- **With .PHONY**: Make always runs the target's commands regardless of files

### When to Use .PHONY
Use `.PHONY` for targets that:
- Don't create files with the same name as the target
- Should always run when called (like `clean`, `test`, `install`)
- Are commands or actions rather than file-building rules

### Example Structure
```makefile
# Declare phony targets at the top
.PHONY: all clean test install help debug release

# Variables
CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = project_manager

# Your rules here...

all: $(TARGET)

test:
	@echo "Running test suite..."
	@./$(TARGET)
	@echo "All tests completed!"

install:
	@echo "Installing $(TARGET)..."
	@echo "Installation complete!"

clean:
	@echo "Cleaning up..."
	# Add your cleanup commands

help:
	@echo "Available targets:"
	@echo "  all     - Build the project"
	@echo "  test    - Run tests" 
	@echo "  install - Install the program"
	@echo "  clean   - Remove build files"
	@echo "  help    - Show this help"
```

### Testing Instructions
1. Create the empty `test` and `install` files first
2. Run `make test` without `.PHONY` - should say "up to date"
3. Add `.PHONY` declaration
4. Run `make test` again - should execute the commands
5. Try `make help` and `make install`

