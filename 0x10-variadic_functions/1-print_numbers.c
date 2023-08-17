#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - a function to print numbers
 * @separator: a pointer to characters that separate numbers
 * @n: number os arguments
 * Return: void returns nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(args);
	printf("\n");
}

