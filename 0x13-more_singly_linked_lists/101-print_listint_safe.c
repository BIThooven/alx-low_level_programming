#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - a function to print a list (safe version)
 * @head: the head node
 * Return: returns the number of nodes in the list, 98 exit status if it fails
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t count;
	const listint_t *curr, *temp;

	count = 0;
	curr = head;
	temp = head;

	while (curr != NULL && temp != NULL && temp->next != NULL)
	{
		printf("[%p] %d\n", (void *)curr, curr->n);
		curr = curr->next;
		temp = temp->next->next;

		if (curr == temp)
		{
			printf("[%p] %d\n", (void *)curr, curr->n);
			printf("-> [%p] %d\n", (void *)temp->next, temp->next->n);
			exit(98);
		}
		count++;
	}

	if (curr != temp)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	return (count);
}
