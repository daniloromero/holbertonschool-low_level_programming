#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table struct
 * @key: key
 * @value: valuse associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	char *copy;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (0);

	copy = strdup(value);
	if (copy == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = copy;
			return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (free(copy), 0);
	new_node->key = strdup(key);
	if (!new_node->key)
		return (free(new_node), 0);
	new_node->value = copy;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);

}

