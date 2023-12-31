#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - a function to concatenate 2 strings
 * @s1: a string to concatenate
 * @s2: a string to concatenate
 * @n: the size to allocate
 * Return: a pointer to the concatenated string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
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
	if (n >= length_s2)
	{
		n = length_s2;
	}
	ptr = (char *)malloc(length_s1 + n + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	strcpy(ptr, s1);
	strncat(ptr, s2, n);
	return (ptr);
}
