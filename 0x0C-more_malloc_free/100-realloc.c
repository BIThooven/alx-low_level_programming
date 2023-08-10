#include <stdlib.h>
#include <string.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer to the old block of memory
 * @old_size: the old size allocated in memory
 * @new_size: the new size allocated in memory
 * Return: returns a pointer to the new allocated size
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;
	unsigned int copy;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return (NULL);
	}

	copy = (old_size < new_size) ? old_size : new_size;
	memcpy(newptr, ptr, copy);
	free(ptr);
	return (newptr);
}
