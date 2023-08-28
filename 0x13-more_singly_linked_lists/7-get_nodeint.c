#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - a function that returns the nth element
 * @head: the head node
 * @index: an integer
 * Return: returns the temp node if success, null if it fails
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t count;
	listint_t *temp;

	temp = head;
	count = 0;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
