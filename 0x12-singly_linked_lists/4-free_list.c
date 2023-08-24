#include <stdlib.h>
#include "lists.h"
/**
 * free_list - a function to free memory
 * @head: the head node
 * Return: void returns nothing
*/
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
