#include "main.h"
#include <string.h>
/**
 * _memset - filling the block of memory with a desired value
 * @s: starting address of memory to be filled
 * @b: the desired value to put
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, sizeof(char) * n);

	return (s);
}
