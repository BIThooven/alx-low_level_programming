#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: minimun of the array
 * @max: maxmimum of the array
 * Return: returns the newly allocated array
*/
int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < max - min + 1; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
