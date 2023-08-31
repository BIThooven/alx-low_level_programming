#include "main.h"
#include <string.h>
/**
 * binary_to_uint - a function that converts binary to uint
 * @b: a character to convert
 * Return: returns the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int k;

	if (b == NULL)
		return (0);

	k = 0;
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		k = k * 2 + (*b - '0');
		b++;
	}
	return (k);
}
