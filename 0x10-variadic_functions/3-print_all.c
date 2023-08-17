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
	char *s;

	va_start(args, format);
	ptr = format;
	while (*ptr)
	{
		switch (*ptr)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(args, double));
				break;
			case 's':
			{
				s = va_arg(args, char *);
				if (s == NULL)
					printf("(nil)");
				printf("%s", s);
				break;
			}
			default:
				break;
		}
		if (*(ptr + 1))
		{
			printf(", ");
		}
		ptr++;
	}
	va_end(args);
	printf("\n");
}
