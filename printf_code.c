#include "holberton.h"
/**
  *_printf - prints a formated string
  *@format: string
  *Return: integer, number of characters printed
  */

int _printf(const char *format, ...)
{
	specifier x[] = {{"c", print_char}, {"s", print_string}, {NULL, NULL}};
	int i, j, flag = 0, sum = 0;
	va_list list;

	va_start(list, format);
	if (!format)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				flag = 1;
				_putchar(format[i]);
				sum++;
			}
			else
			{
				for (j = 0; x[j].spec != NULL; j++)
				{
					if (format[i] == x[j].spec[0])
					{
						flag = 1;
						sum += x[j].p(list);
					}
				}
			}
			if (!flag)
				sum += percent_error(format[i]);
			flag = 0;
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}
	return (sum);
}
