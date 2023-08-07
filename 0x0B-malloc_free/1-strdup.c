#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function returns a pointer to a new string
 * @str: pointer to the allocated string
 * Return: returning the newly duplicated string
*/
char *_strdup(char *str)
{
	char *p;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}
	len = strlen(str);
	p = (char *)malloc(len + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, str);
	return (p);
}
