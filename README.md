*This project has been created as part of the 42 curriculum by mgerard.*

# ft_printf

## Description

The ft_printf project consists of recreating the standard printf function in C.
The goal is to deeply understand variadic functions, string formatting, and low-level memory handling.

This implementation supports several format specifiers (such as %d, %s, %x, etc.) and mimics the behavior of the original C standard library function.

## Instructions

This section explains how to compile and use the library.

### Compilation

To compile the library, run:

```bash
make
```

This will generate the libftprintf.a static library.

To recompile everything from scratch:

```bash
make re
```

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

### Usage

To use the library in your project, include the header file:

```c
#include "ft_printf.h"
```

Then compile your program with libftprintf.a:

```bash
gcc your_file.c -L. -lft
```

### Example

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, number: %d\n", "world", 42);
    return (0);
}
```
output:
```bash
Hello world, number: 42
```
## Features

* Supported conversions:

  * %c : character
  * %s : string
  * %d / %i : integer
  * %u : unsigned integer
  * %x / %X : hexadecimal
  * %p : pointer
  * %% : percent sign

## Functions Overview

### Core Function

| Function Name | Prototype                            | Description                                                             |
| ------------- | ------------------------------------ | ----------------------------------------------------------------------- |
| ft_printf     | int ft_printf(const char *str, ...); | Main function that parses the format string and prints formatted output |

### Output Functions

| Function Name      | Prototype                                             | Description                                     |
| ------------------ | ----------------------------------------------------- | ----------------------------------------------- |
| ft_putchar         | int ft_putchar(char c);                               | Writes a single character to standard output    |
| ft_putstr          | void ft_putstr(const char *str, int *count);          | Writes a string and updates the character count |
| ft_putnbr          | void ft_putnbr(int nb, int *count);                   | Prints a signed integer                         |
| ft_putnbr_unsigned | void ft_putnbr_unsigned(unsigned int nb, int *count); | Prints an unsigned integer                      |

### Hexadecimal & Pointer Functions

| Function Name     | Prototype                                                     | Description                                          |
| ----------------- | ------------------------------------------------------------- | ---------------------------------------------------- |
| ft_dec_to_hex     | void ft_dec_to_hex(unsigned int nb, char *base, int *count);  | Converts and prints a number in hexadecimal          |
| ft_dec_to_hex_ptr | void ft_dec_to_hex_ptr(uintptr_t nb, char *base, int *count); | Converts and prints a pointer address in hexadecimal |

### Format Handling Functions

| Function Name | Prototype                                                           | Description                                   |
| ------------- | ------------------------------------------------------------------- | --------------------------------------------- |
| format_nbs    | void format_nbs(char const *str, int i, int *count, va_list args);  | Handles numeric formats (%d, %i, %u)          |
| format_hex    | void format_hex(char const *str, int i, int *count, va_list args);  | Handles hexadecimal formats (%x, %X, %p)      |
| format_char   | void format_char(const char *str, va_list args, int i, int *count); | Handles character and string formats (%c, %s) |
| print_precent | void print_precent(const char *str, int *count, int i);             | Handles %% (prints a percent sign)            |

## Algorithm & Data Structures

### Algorithm Choice

The core algorithm is based on sequential parsing of the format string.

1. Iterate through the string character by character.
2. When encountering %:

   * Analyze the next character to determine the format type.
   * Call the corresponding handler function.
3. Use va_list, va_start, va_arg, and va_end to retrieve arguments.

### Justification

* Linear parsing (O(n)): simple and efficient.
* Modular design: each format is handled separately.
* Easy to extend and debug.

### Data Structures

* va_list (from <stdarg.h>) to manage variadic arguments.
* char * strings for output handling.

## Resources

### Documentation

* https://learn.microsoft.com/fr-fr/cpp/c-runtime-library/reference/va-arg-va-copy-va-end-va-start?view=msvc-170
* man 3 printf

### AI Usage

AI tools were used to:

* Structure the README
* run as many tests as possible

No critical parts of the implementation were automatically generated.
