#include "main.h"
#include <string.h>
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	char *t = strstr(haystack, needle);

	return (t);
}
