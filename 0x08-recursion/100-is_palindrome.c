#include "main.h"
#include <string.h>
/**
 * is_palindrome - function to check if palindrome or not.
 * @s : a pointer to the string to be checked
 * Return: returns 1 if true , 0 if false.
*/
int is_palindrome(char *s)
{
	int i = 0;
	int len = strlen(s);

	i++;
	if (s[i] != s[len - i - 1])
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
