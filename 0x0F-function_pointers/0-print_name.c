#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - a functions that takes a function pointer to print a string
 * @name: an argument for the function, a pointer to char
 * @f: a function pointer
 * Return: a void function returns nothing
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
