#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - a function that returns the sum of data in a linked list
 * @head: the head node
 * Return: returns the sum , 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
