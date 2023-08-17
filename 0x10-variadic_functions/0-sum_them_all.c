#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - a function to calculate the sum
 * @n: the first argument to start counting from
 * Return: returns the sum
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int s, x;

	va_list(arg);

	if (n == 0)
	{
		return (0);
	}
	va_start(arg, n);
	s = 0;

	for (i = 0; i < n; i++)
	{
		x = va_arg(arg, int);
		s += x;
	}
	va_end(arg);
	return (s);
}
