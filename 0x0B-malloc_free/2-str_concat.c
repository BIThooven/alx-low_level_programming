#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - function to concatenate two strings
 * @s1: arrays of strings to concatenate
 * @s2: arrays of strings to concatenate
 * Return: returns a pointer to the concatenated array
*/
char *str_concat(char *s1, char *s2)
{
	char *p;
	size_t length_s1;
	size_t length_s2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	length_s1 = strlen(s1);
	length_s2 = strlen(s2);

	p = (char *)malloc(length_s1 + length_s2 + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	strcpy(p, s1);
	strcpy(p + length_s1, s2);

	return (p);
}
