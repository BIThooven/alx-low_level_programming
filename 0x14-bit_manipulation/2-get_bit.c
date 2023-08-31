#include "main.h"
#include <stdio.h>
/**
 * get_bit - a function that returns the value of a bit
 * @index: an index
 * @n: the value to be given
 * Return: returns the value of the bit at a given index, -1 in case of error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
