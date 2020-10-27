#include "holberton.h"
/**
  *spec_func - point to function relative to specifier
  *@format: specifier string
  *@i: int
  *Return: pointer to print function
  */
int (*spec_func(const char *format, int i))(va_list list)
{
	specifier x[] = {{"c", print_char}, {"s", print_string}, {NULL, NULL}};
	int j;

	for (j = 0; x[j].spec != NULL; j++)
	{
		if (format[i] == x[j].spec[0])
			return (x[j].p);
	}
	return (NULL);
}
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
