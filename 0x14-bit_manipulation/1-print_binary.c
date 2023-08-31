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
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
