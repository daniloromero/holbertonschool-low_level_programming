#include "hash_tables.h"

/**
 * hash_table_create -  creates a hash table
 * @size: hash table size
 * Return: hash table on success NULL on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table_t *) * size);

	if (!hash_table->array)
		return (NULL);

	return (hash_table);
}
