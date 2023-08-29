#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - a function deletes the node at a certain index
 * @head: the head node
 * @index: an integer to use as index
 * Return: returns 1 if it succeeded, -1 if it fails
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev, *curr;
	size_t i;

	i = 0;
	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	prev = NULL;
	curr = *head;

	while (curr != NULL && i < index)
	{
		prev = curr;
		curr = curr->next;
		i++;
	}
	if (curr == NULL)
	{
		return (-1);
	}
	prev->next = curr->next;
	free(curr);

	return (1);
}
