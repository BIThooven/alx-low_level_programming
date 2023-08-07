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

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	arr[size] = '\0';

	return (arr);
}
