#include "holberton.h"
/**
  *_printf - prints a formated string
  *@format: string
  *Return: integer, number of characters printed
  */
int _printf(const char *format, ...)
{
	int i, sum = 0;
	va_list list;

	va_start(list, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar(format[i]);
				sum++;
			}
			else if (spec_func(format[i]) != NULL)
				sum += spec_func(format[i])(list);
		}
		else
		{
			_putchar(format[i]);
			sum++;
		}
	}
	va_end(list);
	return (sum - 1);
}
