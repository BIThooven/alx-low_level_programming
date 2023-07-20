#include "main.h"
/**
* print_line - function that checks for uppercase character.
* @n: is the integer for the paramaters of my function
* Return: 0
*/
void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (int i = 0; i < n; i++)
	{
	_putchar('_');
	}
	_putchar('\n');
	}
}
