#include <stdio.h>
#include <stdarg.h>
/**
 * 
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list(the_list);
	va_start(the_list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(the_list, int));
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(the_list);
	printf("\n");
}

