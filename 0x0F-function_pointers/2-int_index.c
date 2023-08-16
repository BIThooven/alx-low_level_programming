#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - a function that searches for integers
 * @array: an array of integers
 * @size: the size of the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: -1 if no element matches
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}