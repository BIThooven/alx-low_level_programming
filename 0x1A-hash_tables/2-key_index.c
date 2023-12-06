#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * key_index - Associate a index to a key.
 * @key: Key to be indexed.
 * @size: Size of the hash table.
 *
 * Return: Integer after the operations.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int long index;

	index = hash_djb2(key) % size;
	return (index);
}
