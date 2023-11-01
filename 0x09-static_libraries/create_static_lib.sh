#!/bin/bash

# Compile all .c files in the current directory and create object files
gcc -c *.c

# Create a static library from all the object files
ar rcs liball.a *.o

# Clean up the temporary object files
rm -f *.o

