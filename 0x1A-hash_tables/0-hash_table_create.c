#include "hash_tables.h"

/**
 * hash_table_create -  creates a hash table
 * @size: hash table size
 * Return: hash table on success NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_t;
	unsigned long int i = 0;

	h_t = malloc(sizeof(hash_table_t));
	if (!h_t)
		return (NULL);
	h_t->size = size;
	h_t->array = malloc(sizeof(hash_table_t *) * size);

	if (!h_t->array)
		return (NULL);
	for (; i < size; i++)
		h_t->array[i] = NULL;

	return (h_t);
}
