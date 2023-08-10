#include <stdlib.h>
/**
 * malloc_checked - a function to allocate memroy
 * @b: size to be allocated
 * Return: returns a pointer
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
