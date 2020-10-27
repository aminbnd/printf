#include "holberton.h"
/**
  *spec_func - point to function relative to specifier
  *@format: specifier string
  *@i: int
  *Return: pointer to print function
  */
int (*spec_func(const char *format, int i))(va_list list)
{
	specifier x[] = {
		{"i", print_int},
		{"d", print_int},
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}};
	int j;

	for (j = 0; x[j].spec != NULL; j++)
	{
		if (format[i] == x[j].spec[0])
			return (x[j].p);
	}
	return (NULL);
}
