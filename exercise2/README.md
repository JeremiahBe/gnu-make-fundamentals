## Exercise 2: GNU Make Rules Practice

### Objective
Understand dependencies between object files and executables.

### Task
Create a `Makefile` with proper dependency rules:
1. `calculator` target depends on `main.o` and `math_utils.o`
2. Each `.o` file depends on its corresponding `.cpp` file
3. Object files depend on header files when appropriate
4. Include `clean` target
5. Test by modifying a file and running `make` - only necessary files should recompile
