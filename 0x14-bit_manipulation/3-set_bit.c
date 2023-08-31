#include "main.h"
#include <stdio.h>
/**
 * set_bit - a function that set the value of a bit at a given index
 * @n: a pointer
 * @index: an index
 * Return: returns 1 if it worked, -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (n == NULL || index >= 64)
	{
		return (-1);
	}
	m = 1 << index;
	*n |= m;
	return (1);
}
