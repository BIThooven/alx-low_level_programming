#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments
 * @ac: the arguments count
 * @av: a pointer to string of arguments
 * Return: a pointer to the newstring if success , a NULL if it fails
*/
char *argstostr(int ac, char **av)
{
	int i;
	size_t len;
	char *args, *all_args;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	len = 0;
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	args = all_args = (char *)malloc(len + ac - 1);

	for (i = 0; i < ac; i++)
	{
		memcpy(args, av[i], strlen(av[i]));
		args += strlen(av[i]) + 1;
		*(args - 1) = '\n';
	}
	*(args) = ' ';
	if (all_args == NULL)
	{
		return (NULL);
	}
	return (all_args);
}
