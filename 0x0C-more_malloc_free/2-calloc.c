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
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr = (char *)malloc(nmemb * sizeof(size));
		if (arr == NULL)
		{
			return (NULL);
		}
	}
	return (arr);
}
