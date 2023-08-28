#include "lists.h"
#include <stdlib.h>
/**
 * free_listint - a function that frees a list
 * @head: the head node
 * Return: void returns nothing
*/
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
