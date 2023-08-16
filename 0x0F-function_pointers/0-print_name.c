#include <stdio.h>
#include <string.h>
#include "function_pointers.h"
/**
 * print_nam - a function to print a name
 * @name: an argument for the function , a pointer to char
 * Return: a void func returns nothing
*/
void print_nam(char *name)
{
	while (*name != '\0')
	{
		putchar(*name);
		name++;
	}
	putchar('\n');
}
/**
 * print_name - a functions that takes a function pointer to print a string
 * @name: an argument for the function, a pointer to char
 * @f: a function pointer
 * Return: a void function returns nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
