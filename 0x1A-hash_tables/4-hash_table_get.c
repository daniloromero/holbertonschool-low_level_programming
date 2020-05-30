#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key for retrieving
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hnode;
	unsigned long int i;

	if (!ht || !key)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	if (i >= ht->size)
		return (NULL);

	hnode = ht->array[i];
	while (hnode != NULL)
	{
		if (strcmp(hnode->key, key) == 0)
			return (hnode->value);
		hnode = hnode->next;
	}
	return (NULL);
}
