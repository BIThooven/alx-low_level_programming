#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linked list
 * @h: a string of elemnts
 * Return: returns the number of elemnts
*/
size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	for (; h != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
