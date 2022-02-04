# Group Project: PRINTF

## Authors:
Amine Bondi
<br>
Mounir Chebbi

## Topic:
_Printf is a clone of printf function in C

## Description

The program is about recreating the printf function of the C standard library from scratch.

`Protoype: int _printf(const char *format, ...);`

## How to use the _printf function:

To use _printf function, include the "holberton.h" header file with any main function and compile all the .c files
#### Compilation:

`$gcc *.c -o`

## Example:
Example of main function using the _printf_function
```
#include "holberton.h"

int main(void)
{
	_printf("Hellow, world!\n");
	return (O);
}
```

 #### Output:

$
Hellow, world!
$

## Return value

If the function works successfully, it returns the number of characters printed (excluding the terminating null byte at the end of a string). In case of error, the function returns -1.

## Conversion specifiers

The conversion specifier (that comes after the character %), is a character that specifies to be applied by the function. The _printf function supports the following specifiers:

`d and i`

Convert the argument to signed decimal 

### Example:

`_print("%d\n", 98);`
<br>
`_printf("%i\n" -72);`

#### Output

98
<br>
-72

`c`

Converts the argument to an unsigned char.

### Example

`_printf("%c\n", 'H');`

#### Output:

H

`s`

Prints the argument in a string format starting from the first element of the array of character (the string) to the end excluding the null byte \0.

### Example 

`_printf("%s\n", The _printf function is a printf function clone");`

#### Output:

The _printf function is a printf function clone

`%`

When %% is written, no arguement is converted.

### Example

`_printf("%%\n");`

#### Output

%

## Challenges
* breaking down the project into smaller manageable pieces, and then breaking them into even smaller pieces so that I could have functions that each only did one thing
* trying to make main function have fewer lines
* memory leaks from not freeing dynamically allocated memory
## About me
Med Amin Bondi is currently a software engineering student at [Holberton School](https://www.holbertonschool.com/) starting from september 2020 specialized in the AR/VR field.
During the learning period at Holberton Shcool, Med Amin has learned so much staff related to software enginnering such as:
* C language
* Python
* JavaScript
* C#
* Unity
* Full Stack Web development

Before learning software engineering, Med Amin Bondi was a financial analyst and strategy and transaction consultant at EY Tunis for several years during which he provided many services to local and international companies and groups and got a huge experience and deep knowlage of the business world.

[LinkedIn](https://www.linkedin.com/in/mohamed-amine-bondi-67bb1b171/)
<br>
[twitter](https://twitter.com/AminBondi)