#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  a function that deletes the head node
 * @head: the head node
 * Return: retruns the head node's data
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
