#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - a function that prints anything
 * @format: the format specifier for what needs to be printed
 * Return: returns nothing (void)
*/
void print_all(const char * const format, ...)
{
	va_list args;
	const char *ptr;
	char c;
	int i;
	float f;
	char *s;
	int printed;

	printed = 0;
	ptr = format;
	va_start(args, format);
	while (*ptr)
	{
		if (*ptr == 'c')
		{
			c = (char) va_arg(args, int);
			printf("%s%c", printed ? ", " : "", c);
			printed = 1;
		}
		else if (*ptr == 'i')
		{
			i = va_arg(args, int);
			printf("%s%d", printed ? ", " : "", i);
			printed = 1;
		}
		else if (*ptr == 'f')
		{
			f = (float) va_arg(args, double);
			printf("%s%f", printed ? ", " : "", f);
			printed = 1;
		}
		else if (*ptr == 's')
		{
			s = va_arg(args, char *);
			printf("%s%s", printed ? ", " : "", (s == NULL) ? "(nil)" : s);
			printed = 1;
		}
		ptr++;
	}
	va_end(args);
	printf("\n");
}
