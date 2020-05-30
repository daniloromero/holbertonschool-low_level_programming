#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: Hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *hnode, *aux;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		hnode = ht->array[i];
		while (hnode)
		{
			aux = hnode->next;
			free(hnode->key);
			free(hnode->value);
			free(hnode);
			hnode = aux;
		}
	}
	free(ht->array);
	free(ht);
}
