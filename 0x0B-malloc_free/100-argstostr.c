#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments
 * @ac: the arguments count
 * @av: a pointer to string of arguments
 * Return: a pointer to the newstring if success , a NULL if it fails
*/
#include <stdlib.h>
#include <string.h>

char *argstostr(int ac, char **av)
{
	int i;
	size_t total_length;
	size_t index;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}

	result = (char *)malloc(total_length + 1);
	if (result == NULL)
	{
		return (NULL);
	}

	index = 0;

	for (i = 0; i < ac; i++)
	{
		size_t length = strlen(av[i]);

		strcpy(result + index, av[i]);
		index += length;
		result[index] = '\n';
		index++;
	}
	result[total_length] = '\0';

	return (result);
}
