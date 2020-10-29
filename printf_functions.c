#include "holberton.h"
/**
  *print_char - prints a character
  *@list: list of variable number of arguments
  *Return: ineteger
  */

int print_char (va_list list)
{
	int sum = 0;
	char c = va_arg(list, int);

	_putchar(c);
	sum++;
	return (sum);
}
/**
  *print_string - prints a string
  *@list: list of variable number of arguments
  *Return: integer
  */

int print_string(va_list list)
{
	int i, sum = 0;
	char *s = va_arg(list, char*);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		sum++;
	}
	return (sum);
}
/**
  *print_int - print integer
  *@list : agrs list
  *Return: integer
  */
int print_int(va_list list)
{
	int ret;
	unsigned int sum = 0;
	unsigned int b;
	int a = va_arg(list, int);

	if (a < 0)
	{
		_putchar('-');
		sum++;
		b = -a;
	}
	else
		b = a;
	printnum(b);
	sum += sized(b);
	ret = (int) sum;
	return (ret);
}
/**
  *prit_bin - prints int into binary
  *@list : args list
  *Return: integer
  */
int print_bin(va_list list)
{
	int sum = 0;
	int *sump = &sum;
	unsigned int a = va_arg(list, unsigned int);

	int_bin(a, sump);
	return (sum);
}
