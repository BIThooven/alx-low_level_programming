#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - a function to insert a new node to a linked list
 * @head: the head node
 * @str: a string to be printed
 * Return: returns the newly created string
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (!str)
	{
		return (NULL);
	}
	new_node = (list_t *)malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
/**
 * print_lst - a function to print the list
 * @head: the head node
 * Return: void returns nothing
*/
void print_lst(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		printf("[%ld] %s\n", strlen(current->str), current->str);
		current = current->next;
	}
}
