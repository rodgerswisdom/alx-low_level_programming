# 0x1E. C - Search Algorithms

## Curriculum

### SE Foundations
**Average:** 60.61%

---

## Project Details
- **Weight:** 1
- **Start Date:** May 20, 2024, 6:00 AM
- **End Date:** May 23, 2024, 6:00 AM
- **Checker Release:** May 21, 2024, 12:00 AM
- **Auto Review:** At the deadline

---

## Resources
**Read or Watch:**
- [Search algorithm](#)
- [Space complexity (1)](#)
- [Search Algorithms video playlist](#)

---

## Learning Objectives
By the end of this project, you should be able to explain the following concepts without external help:
- What is a search algorithm?
- What is a linear search?
- What is a binary search?
- Which search algorithm is best depending on your needs?

---

## Copyright - Plagiarism
- You must come up with solutions for the tasks yourself to meet the learning objectives.
- Copying and pasting someone else’s work is not allowed.
- Do not publish any content of this project.
- Plagiarism is strictly forbidden and will result in removal from the program.

---

## Requirements
### General
- Allowed editors: `vi`, `vim`, `emacs`
- Compilation on Ubuntu 20.04 LTS using `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code must use the Betty style (`betty-style.pl` and `betty-doc.pl`)
- No global variables allowed
- Maximum 5 functions per file
- Only the `printf` function from the standard library is allowed. Functions like `strdup`, `malloc`, etc., are forbidden.
- Main files provided as examples can be used to test your functions but do not need to be pushed to your repo. Our own main files will be used for compilation.
- All function prototypes should be included in a header file called `search_algos.h`
- Header files should be include guarded

### Big O Notation
- Use the following format for Big O notation files:
  ```
  O(1)
  O(n)
  O(n!)
  n*m -> O(nm)
  n^2 -> O(n^2)
  sqrt(n) -> O(sqrt(n))
  log(n) -> O(log(n))
  n * log(n) -> O(nlog(n))
  ```

---

## Tasks

### 0. Linear search
**File:** `0-linear.c`

Write a function that searches for a value in an array of integers using the Linear search algorithm.

**Prototype:** `int linear_search(int *array, size_t size, int value);`
- `array`: Pointer to the first element of the array
- `size`: Number of elements in the array
- `value`: Value to search for

**Return:** 
- First index where `value` is located
- `-1` if `value` is not present or if `array` is `NULL`

**Example:**
```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
    printf("Found %d at index: %d\n\n", 42, linear_search(array, size, 42));
    printf("Found %d at index: %d\n", 999, linear_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

**Compilation:**
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 0-main.c 0-linear.c -o 0-linear
```

**Execution:**
```bash
./0-linear
```

### 1. Binary search
**File:** `1-binary.c`

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm.

**Prototype:** `int binary_search(int *array, size_t size, int value);`
- `array`: Pointer to the first element of the array
- `size`: Number of elements in the array
- `value`: Value to search for

**Return:** 
- Index where `value` is located
- `-1` if `value` is not present or if `array` is `NULL`

**Example:**
```c
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int main(void)
{
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 2, binary_search(array, size, 2));
    printf("Found %d at index: %d\n\n", 5, binary_search(array, 5, 5));
    printf("Found %d at index: %d\n", 999, binary_search(array, size, 999));
    return (EXIT_SUCCESS);
}
```

**Compilation:**
```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 1-main.c 1-binary.c -o 1-binary
```

**Execution:**
```bash
./1-binary
```

### 2. Big O #0
**File:** `2-O`

What is the time complexity (worst case) of a linear search in an array of size n?

### 3. Big O #1
**File:** `3-O`

What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

### 4. Big O #2
**File:** `4-O`

What is the time complexity (worst case) of a binary search in an array of size n?

### 5. Big O #3
**File:** `5-O`

What is the space complexity (worst case) of a binary search in an array of size n?

### 6. Big O #4
**File:** `6-O`

What is the space complexity of this function/algorithm?
```c
int **allocate_map(int n, int m)
{
    int **map;

    map = malloc(sizeof(int *) * n);
    for (size_t i = 0; i < n; i++)
    {
        map[i] = malloc(sizeof(int) * m);
    }
    return (map);
}
```

---

**GitHub Repository:** [alx-low_level_programming](#)

**Directory:** `0x1E-search_algorithms`
