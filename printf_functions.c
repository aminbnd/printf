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
	int sum = 0;
	int a = va_arg(list, int);

	if (a < 0)
	{
		_putchar('-');
		sum++;
		a = a * (-1);
	}
	sum += printnum(a, 10);
	return (sum);
}
