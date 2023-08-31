#include "main.h"
#include <stdio.h>
/**
 * flip_bits - a function that flips bits from one number to another
 * @n: number to be flipped
 * @m: number to fliped
 * Return: returns the number of bits fliped
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int i;

	xor = n ^ m;
	i = 0;
	while (xor)
	{
		i += xor & 1;
		xor >>= 1;
	}
	return (i);
}
