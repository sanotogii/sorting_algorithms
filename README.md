# Sorting Algorithms Project

## Background Context

This project is meant to be completed by groups of two students. Each group of two should pair program for at least the mandatory part.

### Resources

Read or watch:

- [Sorting algorithm](#) - Link to resource
- [Big O notation](#) - Link to resource
- [Sorting algorithms animations](#) - Link to resource
- [15 sorting algorithms in 6 minutes](#) - (WARNING: The following video can trigger seizures/epilepsy. It is not required for the project, as it is only a funny visualization of different sorting algorithms)
- [CS50 Algorithms explanation in detail by David Malan](#) - Link to resource
- [All about sorting algorithms](#) - Link to resource

### Learning Objectives

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

#### General

- Understand at least four different sorting algorithms.
- Explain what the Big O notation is and how to evaluate the time complexity of an algorithm.
- Select the best sorting algorithm for a given input.
- Understand what a stable sorting algorithm is.

#### Copyright - Plagiarism

You are tasked to come up with solutions for the tasks below yourself to meet the above learning objectives. You will not be able to meet the objectives of this or any following project by copying and pasting someone else's work. Any form of plagiarism is strictly forbidden and will result in removal from the program.

## Requirements

#### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- Unless specified otherwise, you are not allowed to use the standard library. Any use of functions like printf, puts, … is totally forbidden.
- The prototypes of all your functions should be included in your header file called sort.h
- Don't forget to push your header file
- All your header files should be include guarded
- A list/array does not need to be sorted if its size is less than 2.

### GitHub

There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.

### More Info

#### Data Structure and Functions

For this project, you are given the following print_array and print_list functions:

```c
#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
    int i;

    i = 0;
    while (list)
    {
        if (i > 0)
            printf(", ");
        printf("%d", list->n);
        ++i;
        list = list->next;
    }
    printf("\n");
}

