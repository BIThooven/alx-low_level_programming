#include "lists.h"
#include <stdlib.h>
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *next;

	if (head == NULL)
		return;
	temp = *head;
	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}
