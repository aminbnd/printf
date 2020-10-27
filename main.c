#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    /**
     *int len;
    int len2;
    unsigned int ui;
    void *addr;
     */
	int sum;
	char *str = "It works, thats gereat !!";
	char c = 'b';
	
	printf("Try a simple thing\n");
	_printf("Try a simple thing\n");
	printf("%d\n", 5);
	_printf("%d\n", 5);
	printf("%c\n", 'a');
	_printf("%c\n", 'a');
	printf("%s\n", str);
	_printf("%s\n", str);
	printf("Testing printing char %c\n", c);
	_printf("Testing printing char %c\n", c);
	printf("testing printing wrong specifier %d\n", c );
	_printf("testing printing wrong specifier %d\n", c);
	printf("testing printing string: %s\n", str);
	_printf("testing printing string: %s\n", str);
	_printf("%r\n", c);
	_printf("%%c\n", c);
	sum = _printf("Let's try to printf a simple sentence.\n");
	printf("%d\n", sum);
	printf("Let's try to printf a simple sentence.\n");
	sum = _printf("Percent:[%%]\n");
	printf("%d\n", sum);
	printf("Percent:[%%]\n");
    /**
     *ui = (unsigned int)INT_MAX + 1024;
     *addr = (void *)0x7ffe637541f0;
     *_printf("Length:[%d, %i]\n", len, len);
     *printf("Length:[%d, %i]\n", len2, len2);
     *_printf("Negative:[%d]\n", -762534);
     *printf("Negative:[%d]\n", -762534);
     *_printf("Unsigned:[%u]\n", ui);
     *printf("Unsigned:[%u]\n", ui);
     *_printf("Unsigned octal:[%o]\n", ui);
     *printf("Unsigned octal:[%o]\n", ui);
     *_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
     *printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
     */
	sum = _printf("Character:[%c]\n", 'H');
	printf("%d\n", sum);
	printf("Character:[%c]\n", 'H');
	sum = _printf("String:[%s]\n", "I am a string !");
	printf("%d\n", sum);
	printf("String:[%s]\n", "I am a string !");
    /**
      *_printf("Address:[%p]\n", addr);
      *printf("Address:[%p]\n", addr);
      *len = _printf("Percent:[%%]\n");
      *len2 = printf("Percent:[%%]\n");
      *_printf("Len:[%d]\n", len);
      *printf("Len:[%d]\n", len2);
      */
	sum = _printf("Unknown:[%r]\n");
	printf("%d\n", sum);
    /**
      *printf("Unknown:[%r]\n");
     */
	return (0);
}
