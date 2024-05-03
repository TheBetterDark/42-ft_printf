# 42-ft_printf

## Description

This project is a library that contains a function called `ft_printf` that mimics the behavior of the original `printf` function from the C standard library. The function is able to print strings, characters, integers, and hexadecimal numbers. The function also supports flags, width, and precision.

## Usage

To use this library, you need to compile the library using the Makefile. The Makefile will compile the library and create a static library called libft.a. You can then include this library in your future projects.

## Makefile

The Makefile has the following rules:

- all: This rule will compile the library.
- clean: This rule will remove all object files.
- fclean: This rule will remove all object files and the library.
- re: This rule will remove all object files, the library, and recompile the library.

## Functions

The library contains the following:

- `ft_printf`: This function mimics the behavior of the original `printf` function from the C standard library. The function is able to print strings, characters, integers, and hexadecimal numbers. The function also supports flags, width, and precision.

- `libft`: This library also contains the functions from the libft project. The functions are used to manipulate strings, characters, and memory.

## Example

```c
#include "ft_printf.h"
      
int main(void)
{
 ft_printf("Hello, World!\n");
 return (0);
}
```
