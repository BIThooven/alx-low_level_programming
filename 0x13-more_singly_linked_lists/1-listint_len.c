#include "lists.h"
#include <stdio.h>
/**
 * listint_len - a function that prints the length
 * @h: the head node
 * Return: returns the number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;
	for (; h != NULL; h = h->next)
	{
		i++;
	}
	return (i);
}
