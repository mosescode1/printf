# Project Title: Custom Printf Function

## Table of Contents

- [Description](#description)
- [Background Context](#background-context)
- [Resources](#resources)
- [Requirements](#requirements)
- [GitHub](#github)
- [More Info](#more-info)
- [Tasks](#tasks)

## Description

For this project, we expect you to look at these concepts:

- Group Projects
- Pair Programming - How To
- Flowcharts
- Technical Writing
- Printf function brief - What to know to create your own Printf function

**Background Context**: Write your own `printf` function.

### Resources

Read or watch:

- [Secrets of printf](#)
- [Group Projects concept page (Don’t forget to read this)](#)
- [Flowcharts concept page](#)
- `man` or `help`:
  - printf (3)

### Requirements

**General**

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project, is mandatory
- Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all your functions should be included in your header file called `main.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- Note that we will not provide the `_putchar` function for this project

**GitHub**

- There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their GitHub account; otherwise, you risk scoring 0%

**More Info**

**Authorized functions and macros**

- `write` (man 2 write)
- `malloc` (man 3 malloc)
- `free` (man 3 free)
- `va_start` (man 3 va_start)
- `va_end` (man 3 va_end)
- `va_copy` (man 3 va_copy)
- `va_arg` (man 3 va_arg)

**Compilation**

Your code will be compiled this way:

```sh
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

### Tasks

# Custom Printf Function

This project aims to create a custom `printf` function in C. Below is a sample `main.c` file with test cases to demonstrate the functionality of the custom `printf` function.

## Sample main.c File

```c
#include <limits.h>
#include <stdio.h>
#include "main.h"

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}


#### 0. I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life

- **Task:** Write a function that produces output according to a format.
- **Prototype:** `int _printf(const char *format, ...);`
- **Returns:** the number of characters printed (excluding the null byte used to end output to strings)
- **Output:** Write output to `stdout`, the standard output stream.
- **Format Specifiers:** Format is a character string. The format string is composed of zero or more directives. See `man 3 printf` for more detail. You need to handle the following conversion specifiers:
  - `%c`: Character
  - `%s`: String
  - `%%`: Percent sign
- **Additional Notes:** You don’t have to reproduce the buffer handling of the C library `printf` function. You don’t have to handle the flag characters, field width, precision, or length modifiers.

#### 1. Education is when you read the fine print. Experience is what you get if you don't

- **Task:** Handle the following conversion specifiers:
  - `%d`: Decimal integer
  - `%i`: Integer
- **Additional Notes:** You don’t have to handle the flag characters, field width, precision, or length modifiers.

