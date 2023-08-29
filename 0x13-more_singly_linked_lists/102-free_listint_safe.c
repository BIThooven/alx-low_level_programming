#include "lists.h"
#include <stdlib.h>
size_t free_listint_safe(listint_t **h)
{
	size_t i;
	listint_t *curr, *nextnode;

	while (curr != NULL)
	{
		nextnode = curr->next;
		free(curr);
		curr = nextnode;
		i++;
	}
	*h = NULL;
	return (i);
}
