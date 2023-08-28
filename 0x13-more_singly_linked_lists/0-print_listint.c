#include "lists.h"
#include <stdio.h>
/**
 * print_listint - a function to print data stored in a linked list
 * @h: the head node
 * Return: returns the number of printed args
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
