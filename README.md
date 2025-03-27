# Collaborative Project:	`_printf`
As part of the developper program at the Holberton School, we have written a very simplified implementation of the function  `printf` of the standard C language library: `_printf`.
## General information
`printf` is a function in the standard library of C that formats text and prints it to the standard output. It can print a multitude of data types and offers great freedom to format said data.
Display the content of the variables our code uses, printing tables, print messages to the user of our program, and many MANY more are the possible use cases of this function part of the standard for C programming.
### Requirements
We have been required to make our code compilation--ready under systems with Ubuntu 20.04 LTS and using `gcc` as a compiler.
Additionally, the compiler would use the flags `-Wall -Werror -Wextra -pedantic -std=gnu89` and all our codes must follow the Betty coding style (which limits the length of our programs, among other things).

Team work, collaboration, and the methodology of equitative contributions were strictly observed.

We were authorized to use only the following functions and macros:
 - write
 - malloc
 - free
 - va_start
 - va_end
 - va_arg
 - va_copy
## Description
Prototype of our function:
```
#include "main.h"

int _printf(const *format, ...);
```
Our project involves creating a `_printf` function that aspires to ressemble `printf` in a few limited cases. It handles the conversion specifiers `%c`, `%s`, `%d`, and `%i`; it also reconizes `%%`.
However, outside of these uses of the character `%`, the behavior of `_printf` matches that of `printf`when some of the latter's  warnings are ignored; for this purpose, the compilation is performed with the following flags (using `gcc`):
```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format
```
In thi case, when no specifier is recognized, the function prints the `%` as if it were properly specified as `%%`, EXCEPT when it is at the end of the string (before the null terminator). When `%` is typed at the end of the string it is treated as an interrupted conversion specifier, the printing stops at the previous character and an error value of -1 is returned.

`_printf` does not handle the flag characters, field width, precision, nor length modifiers.
### Flowchart
We have made a flowchart to facilitate the comprehension of our algorithm:
![flowchart](https://github.com/XavierLaforgue/holbertonschool-printf/blob/dev/flowchart_printf.jpg)
We receive as input a string which may contain any number of format specifiers or none at all, and at least as many arguments as conversion specifiers that require one. If the input string is not NULL we load the list of arguments, initialize indices and counters. We go through the input string character par character, if we find no `%` we print the current character and check the next. If we find a `%`we use a function to choose the appropriate printing function to call. Once any printing is done, the number of printed bytes is added to the count and we go through the string till we find the null terminator.
## Required files
- `main.h` : header file containing all standard library inclusions as well as all the function prototypes, and structures used by `_printf`.
- `my_printf_w_struct.c` : file containing the definition of `printf`.
- `get_print.c` : contains the function that chooses which and returns the approppriate printing function to use according to the format specifier.
- `print_char_struct.c` : contains the function that prints an individual character.
- `print_int_struct.c` : contains the function that prints an integer.
- `print_nothing.c` : contains a function that prints nothing but returns the number of bytes printed before it is called in its particular use case (when the conversion specifier is not recognised and `%` and whatever character that follows ---except the null byte--- are printed as they are).
- `print_percent.c` : contains a function that symply prints the `%` character.
- `print_string_struct.c` : contains a function that prints a string from the argument list of a variadic function.
- `print_string.c` : contains a function that prints a string given to it as argument. 
## Usage/Examples

```
int age = 30;
_printf("I am %d years old.\n", age);
```
![output_age](https://drive.google.com/open?id=18pKUvFhbU7nY7jmhm3a4QidYiC0NaDVz&usp=drive_fs)
```
_printf("There is no %s int than %i.\n", "smaller", INT_MIN);
_printf("Nor %s int than %d.\n", "larger", INT_MAX); 
```
![output_smaller_int](https://drive.google.com/open?id=18rDWhPifK4zJXNNshoQeG0_4fXeikhVG&usp=drive_fs)

`_printf` is safe of memory leaks !

![valgrind](https://drive.google.com/open?id=192lWr1Nnc28dCg9uUY4EH-nwyvNdIaz8&usp=drive_fs)
## Man page
A man page is available !
It suffices to execute: ``man ./man_3_printf`` while in the same directory.

## Author(s)

 - Xavier Laforgue [github.com/XavierLaforgue](https://github.com/XavierLaforgue)
 - Esteban Levy [github.com/ST-GuY](https://github.com/ST-GuY)
 - Vivien Bernardot [github.com/voicedhealer](https://github.com/voicedhealer)


> Written using [StackEdit](https://stackedit.io/).