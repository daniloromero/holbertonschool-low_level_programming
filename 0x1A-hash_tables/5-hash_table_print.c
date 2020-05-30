#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: Hash table
 * Return: None
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *hnode;
	char j = ' ';

	if (!ht)
		return;

	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		hnode = ht->array[i];
		while (hnode != NULL)
		{
			if (j == ',')
				printf(",");
			printf("'%s': '%s'", hnode->key, hnode->value);
			hnode = hnode->next;
			j = ',';
		}
	}
	printf("}");
}
