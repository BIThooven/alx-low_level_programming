#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_t - a function that inserts an elements to a hash table
 * @ht: hashtable to insert to
 * @key: is a key
 * @value: value to be inserted
 * Return: returns 1 in case of success , 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}

	index = hash_djb2((unsigned char *)key) % ht->size;
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = my_strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	node->key = my_strdup(key);
	node->value = my_strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;

	return (1);
}
/**
 * my_strdup - a function that duplicates strings
 * @src: the string to be duplicated
 * Return: the new duplicated string
*/
char *my_strdup(const char *src)
{
	char *dst;

	dst = malloc(strlen(src) + 1);
	if (dst == NULL)
	{
		return (NULL);
	}
	strcpy(dst, src);
	return (dst);
}
