#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -  a function that executes another function
 * @array: an array of elements
 * @size: size of the array
 * @action: a function pointer
 * Return: void returns nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
