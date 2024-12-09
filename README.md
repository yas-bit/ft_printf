# ft_printf Project

## Overview

The ft_print project is part of the 42 School curriculum, designed to help students practice fundamental C programming concepts such as creating functions, managing standard output, and handling strings. The goal is to implement a function that mimics the behavior of the standard printf.

The project helps students get comfortable with text output, teaching them how to format and print strings using va_args in C.

## Functions

- ``ft_putchar``: A function to print a single character.
- ``ft_putnbr_base``: A function to print an unsigned long integer in hexadecimal format.
- ``ft_putnbr_un``: A function to print an unsigned integer .
- ``ft_putstr``: A function to print a string.
- ``ft_printf``: A mimic function to libc printf

ft_printf function should mimic the behavior of printf but with limited functionality.

## Requirements

- ``C Language``: This project should be written in C.
- ``Norminette Compliance``: Code must follow the 42 School's coding style rules and pass Norminette validation.
- ``Makefile``: A Makefile must be provided to compile the project.

## Compilation

To compile the project, simply use the ``make`` command


```
make
```

This will create a static library called ``libftprintf.a`` from the source files.

## Usage

To use the static library with your project you can use:

```
gcc yourfile.c libftprintf.a
```