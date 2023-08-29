#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - a function to insert a node at a given position
 * @head: the head node
 * @idx: number of elemnts
 * @n: an integer
 * Return: returns the newly allocated memory
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *newnode;
	size_t i;

	if (head == NULL)
		return (NULL);

	newnode = (listint_t *)malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	
	temp = *head;
	for (i = 1; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			free(newnode);
			return (NULL);
		}
		temp = temp->next;
	}
	if (temp == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->next = temp->next;
	temp->next = newnode;

	return (newnode);
}
