#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - a function to insert a new node to a linked list
 * @head: the head node
 * @str: a string to be printed
 * Return: returns the newly created string, null if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int length;

	length = 0;
	if (!str)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
