# Project Title: Doubly Linked Lists in C

## Introduction
This project focuses on implementing doubly linked lists in the C programming language. The project includes various tasks aimed at understanding and working with doubly linked lists, such as printing the elements, finding the length, adding nodes, freeing the list, and performing other operations.

## Project Details
- **Author:** Julien Barbier
- **Weight:** 1
- **Start Date:** Jan 25, 2024 6:00 AM
- **End Date:** Jan 26, 2024 6:00 AM
- **Checker Release:** Jan 25, 2024 12:00 PM
- **Auto Review Deadline:** Jan 26, 2024 (automatic review at deadline)

## Learning Objectives
By the end of this project, you are expected to:
- Understand what a doubly linked list is.
- Know how to use doubly linked lists.
- Implement various operations on doubly linked lists, including deletion and insertion.
- Develop the ability to find the right sources of information independently.

## Resources
Read or watch:
- [What is a Doubly Linked List](#)
- Additional resources for self-learning

## Copyright - Plagiarism
It is crucial to come up with your solutions for the tasks and meet the learning objectives. Plagiarism, in any form, is strictly forbidden and will result in removal from the program.

## Requirements
### General
- Allowed Editors: vi, vim, emacs
- All files interpreted/compiled on Ubuntu 20.04 LTS using python3 (version 3.8.5)
- All files should end with a new line
- A `README.md` file at the root of the project folder is mandatory
- Code should follow the Betty style and will be checked using `betty-style.pl` and `betty-doc.pl`
- No global variables are allowed
- No more than 5 functions per file
- Only the C standard library functions allowed are `malloc`, `free`, `printf`, and `exit`
- Prototypes of all functions should be included in the header file called `lists.h`
- Don't forget to push your header file
- All header files should be include guarded

### More Info
Please use the following data structure for this project:
```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

## Tasks
### 0. Print list
Write a function that prints all the elements of a `dlistint_t` list.

**Prototype:** `size_t print_dlistint(const dlistint_t *h);`

**Return:** the number of nodes

**Format:** see example

### 1. List length
Write a function that returns the number of elements in a linked `dlistint_t` list.

**Prototype:** `size_t dlistint_len(const dlistint_t *h);`

### 2. Add node
Write a function that adds a new node at the beginning of a `dlistint_t` list.

**Prototype:** `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`

**Return:** the address of the new element, or NULL if it failed

### 3. Add node at the end
Write a function that adds a new node at the end of a `dlistint_t` list.

**Prototype:** `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`

**Return:** the address of the new element, or NULL if it failed

### 4. Free list
Write a function that frees a `dlistint_t` list.

**Prototype:** `void free_dlistint(dlistint_t *head);`

### 5. Get node at index
Write a function that returns the nth node of a `dlistint_t` linked list.

**Prototype:** `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`

**Return:** the address of the new node, or NULL if it failed

### 6. Sum list
Write a function that returns the sum of all the data (n) of a `dlistint_t` linked list.

**Prototype:** `int sum_dlistint(dlistint_t *head);`

**Return:** the sum of all the data (n)

### 7. Insert at index
Write a function that inserts a new node at a given position.

**Prototype:** `dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);`

**Return:** the address of the new node, or NULL if it failed

### 8. Delete at index
Write a function that deletes the node at index index of a `dlistint_t` linked list.

**Prototype:** `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`

**Return:** 1 if it succeeded, -1 if it failed

### 9. Crackme4
Find the password for crackme4 and save it in the file `100-password`.

### 10. Palindromes
Find the largest palindrome made from the product of two 3-digit numbers and save the result in the file `102-result`.

### 11. crackme5
Write a keygen for crackme5 using the provided usage and output as described in the task.

