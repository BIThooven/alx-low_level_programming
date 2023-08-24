#include <stdio.h>
#include "lists.h"
/**
 * print_list - a function to print all the elements
 * @h: a pointer to the string to be printed
 * Return: returns the number of elements printed
*/
size_t print_list(const list_t *h)
{
	size_t i;

	i = 0;
	for (; h != NULL; h = h->next)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		i++;
	}
	return (i);
}
