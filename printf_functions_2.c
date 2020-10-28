#include "holberton.h"
/**
  *printnum - prints int using _putchar
  *@num: int to print
  */
void printnum(unsigned int num)
{
	if (num / 10)
		printnum(num / 10);
	_putchar('0' + num % 10);
}
/**
  *sized - size of int
  *@num: int
  *Return: size
  */
unsigned int sized(unsigned int num)
{
	if (num / 10 == 0)
		return (1);
	return (1 + sized(num / 10));
}
