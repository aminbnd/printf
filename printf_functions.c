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
		s = "(null)"
	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		sum++;
	}
	return (sum);
}

/**
  *percent_error - prints error message
  *@c: character
  *Return: integer
  */

int percent_error(char c)
{
	int i, sum = 0;
	char *s = "unknown conversion type character ";

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		sum++;
	}
	_putchar('\'');
	sum++;
	_putchar(c);
	sum++;
	_putchar('\'');
	sum++;
	return (sum);
}
