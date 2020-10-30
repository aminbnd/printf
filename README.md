Group Project: PRINTF

Authors: Amine Bondi    Mounir Chebbi

Topic: _Printf is a clone of printf function in C

Description

The program is about recreating the printf function of the C standard library from scratch.
Protoype: int _printf(const char *format, ...);

How to use the _printf function:

To use the printf function, compile all the .c files in the repository and include the "holberton.h" header file" whith main function

Example of main function using the _printf_function:

#include "holberton.h"

int main(void)
{
	_printf("Hellow, world!\n");
	return (O);
}

Compilation:

$gcc *.c -o

Output:

$
Hellow, world!
$

Return value

If the function works successfully, it returns the number of characters printed (excluding the terminating null byte at the end of a string). In case of error, the function returns -1.

Conversion specifiers

The conversion specifier (that comes after the character %), is a character that specifies to be applied by the function. The _printf function supports the following specifiers:

d and i

Convert the argument to signed decimal 

Example:

_print("%d\n", 98);
_printf("%i\n" -72);

Output

98
-72

c

Converts the argument to an unsigned char.

Example

_printf("%c\n", 'H');

Output:

H

s

Prints the argument in a string format starting from the first element of the array of character (the string) to the end excluding the null byte \0.

Example 

_printf("%s\n", The _printf function is a printf function clone");

Output:

The _printf function is a printf function clone

%

When %% is written, no arguement is converted.

Example

_printf("%%\n");

Output

%

