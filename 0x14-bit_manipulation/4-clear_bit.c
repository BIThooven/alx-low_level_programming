#include "main.h"
#include <stdio.h>
/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index
 * @n: a pointer
 * @index: an index
 * Return: returns 1 if it worked, -1 if it fails
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k;

	if (n == NULL || index >= 64)
	{
		return (-1);
	}
	k = ~(1 << index);
	*n &= k;
	return (1);
}
