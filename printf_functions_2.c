#include "holberton.h"
/**
  *printnum - prints int using _putchar
  *@num: int to print
  *@i: base
  *Return: sum
  */
int printnum(int num, int i)
{
	if (i == 1)
		return (0);
	if ((num / i) > 0)
		return (printnum(num, i * 10));
	i = i / 10;
	_putchar('0' + num / i);
	return (1 + printnum(num % i, i));
}
