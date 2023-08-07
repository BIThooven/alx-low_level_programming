#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function to allocate memory for an array
 * @size: the size of the allocated array
 * @c: characters in the array
 * Return: a pointer to the array
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i = 0;

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[i] = '\0';

	return (arr);
}
