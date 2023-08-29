#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - a function to reverse a linked list
 * @head: the head node
 * Return: returns a pointer to the new head
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *curr;

	temp = NULL;
	curr = *head;

	while (curr != NULL)
	{
		listint_t *next;

		next = curr->next;
		curr->next = temp;
		temp = curr;
		curr = next;
	}
	*head = temp;
	return (temp);
}
