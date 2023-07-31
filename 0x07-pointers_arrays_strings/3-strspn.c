#include "main.h"
#include <string.h>
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: the position of the value intended
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos = strspn(s, accept);

	return (pos);
}
