*This project has been created as part of the 42 curriculum by <login1>.*

# ft_printf

## Description

The ft_printf project consists of recreating the standard printf function in C.
The goal is to deeply understand variadic functions, string formatting, and low-level memory handling.

This implementation supports several format specifiers (such as %d, %s, %x, etc.) and mimics the behavior of the original C standard library function.

## Instructions

### Compilation

To compile the library:
make

This will generate the libftprintf.a file.

### Usage

Include the header in your project:
#include "ft_printf.h"

Compile your program with:
gcc main.c libftprintf.a

### Example

#include "ft_printf.h"

int main(void)
{
ft_printf("Hello %s, number: %d\n", "world", 42);
return (0);
}

## Features

* Supported conversions:

  * %c : character
  * %s : string
  * %d / %i : integer
  * %u : unsigned integer
  * %x / %X : hexadecimal
  * %p : pointer
  * %% : percent sign

## Algorithm & Data Structures

### Algorithm Choice

The core algorithm is based on sequential parsing of the format string.

1. Iterate through the string character by character.
2. When encountering %:

   * Analyze the next character to determine the format type.
   * Call the corresponding handler function (e.g., print_int, print_str).
3. Use va_list, va_start, va_arg, and va_end to retrieve arguments.

### Justification

* Linear parsing (O(n)): simple and efficient for this use case.
* Modular design: each conversion is handled by a dedicated function, improving readability and maintainability.
* No complex data structures: keeps the implementation aligned with project constraints.

### Data Structures

* va_list (from <stdarg.h>) to manage variadic arguments.
* Strings (char *) for data manipulation and output.

## Resources

### Documentation

* https://en.cppreference.com/w/c/io/fprintf
* man 3 printf
* https://en.cppreference.com/w/c/variadic

### Tutorials

* Variadic functions in C
* Articles about implementing printf

### AI Usage

AI tools were used to:

* Better understand variadic functions
* Clarify certain behaviors of printf
* Help structure this README

No critical parts of the implementation were automatically generated.

## Author

* <login1>
