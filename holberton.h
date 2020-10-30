#ifndef PRINTF_HEADER
#define PRINTF_HEADER
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
  * struct specifier - structure for specifier call
  *@spec: first member string
  *@p: second member function to pointer
  *Description: structure to call the specifier function when needed
  */
typedef struct specifier
{
	char *spec;
	int (*p)(va_list);
} specifier;
int (*spec_func(const char *format, int i))(va_list list);
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_int(va_list list);
void printnum(unsigned int num, int *sump);
/*unsigned int sized(unsigned int a);*/
int print_bin(va_list list);
void int_bin(unsigned int a, int *sump);
#endif
