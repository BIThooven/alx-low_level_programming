#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * print_binary - a function that print the binary representation of a number
 * @n: the number to be represented in binary
 * Return: void returns nothing
*/
void print_binary(unsigned long int n)
{
	unsigned int bit;

	bit = UINT_MAX - (UINT_MAX >> 1);
	while (bit)
	{
		_putchar(n & bit ? '1' : '0');
		bit >>= 1;
	}
}
