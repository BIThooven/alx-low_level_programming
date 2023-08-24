#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - a function to insert at the beginning of a linked list
 * @head: the head node
 * @str: string to be printed
 * Return: returns the new allocated node , or null if it fails
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *new_node;
	unsigned int i;

	i = 0;
	temp = *head;
	while (str[i])
	{
		i++;
	}
	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (new_node);
}
