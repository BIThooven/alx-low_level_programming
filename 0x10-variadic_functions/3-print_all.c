#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: the format specifier for what needs to be printed
 * Return: void function returns nothing
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i, num;
	char c, *s;
	float f;

	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c,", c);
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf(" %d,", num);
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf(" %f,", f);
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char *);
			if (s != NULL)
			{
				printf(" %s,", s);
			}
			else
			{
				printf(" (nil),");
			}
		}
		i++;
	}
	va_end(args);
	printf("\b \n");
}
