#include <stdlib.h>
#include <string.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of elements in bytes
 * Return: return the allocated array
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, nmemb * size);
	return (arr);
}
