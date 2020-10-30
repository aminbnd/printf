#include "holberton.h"
/**
  *printnum - prints int using _putchar
  *@num: int to print
  *@sump: pointer to int
  */
void printnum(unsigned int num, int *sump)
{
	if (num / 10)
		printnum(num / 10, sump);
	_putchar('0' + num % 10);
	*sump += 1;
}
/**
  *int_bin - convert int to bin
  *@a: int to convert
  *@sump: pointer to int
  */
void int_bin(unsigned int a, int *sump)
{
	if (a / 2 == 0)
	{
		_putchar('0' + a % 2);
		*sump += 1;
	}
	else
	{
		int_bin(a / 2, sump);
		_putchar('0' + a % 2);
		*sump += 1;
	}
}
