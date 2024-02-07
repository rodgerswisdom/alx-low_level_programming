### Dynamic Libraries

#### Overview
This project focuses on understanding dynamic libraries in C programming. Dynamic libraries provide a way to share code among multiple programs and are loaded into memory only when needed at runtime. The project covers creating, using, and understanding dynamic libraries in C.

#### Learning Objectives
- Understand what dynamic libraries are and how they work
- Learn how to create dynamic libraries
- Know how to use dynamic libraries in C programs
- Understand the differences between static and dynamic libraries
- Learn basic usage of tools like `nm`, `ldd`, and `ldconfig`

#### Repository Structure
- **libdynamic.so**: This dynamic library contains various functions listed in the provided specifications.
- **main.h**: Header file containing prototypes of functions used in the dynamic library.
- **0-main.c**: Test program to demonstrate the usage of the dynamic library by calling the `_strlen` function.
- **1-create_dynamic_lib.sh**: Bash script to create a dynamic library called `liball.so` from all `.c` files in the current directory.

#### Tasks Completed
1. **Creating a Dynamic Library**: Implemented a dynamic library (`libdynamic.so`) containing various functions.
2. **Script to Create Dynamic Library**: Developed a script (`1-create_dynamic_lib.sh`) that creates a dynamic library (`liball.so`) from all `.c` files in the current directory.

#### Execution
- To compile the test program (`0-main.c`) with the dynamic library:
  ```bash
  gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
  ```
- To run the test program:
  ```bash
  ./len
  ```
- To create the dynamic library using the provided script:
  ```bash
  ./1-create_dynamic_lib.sh
  ```

#### Author
Julien Barbier

#### Copyright
© 2024 ALX. All rights reserved.
