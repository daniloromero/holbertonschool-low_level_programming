#include "hash_tables.h"

/**
 * shash_table_create -  creates a hash table
 * @size: hash table size
 * Return: hash table on success NULL on failure
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h_t;
	unsigned long int i = 0;

	h_t = malloc(sizeof(shash_table_t));
	if (!h_t)
		return (NULL);
	h_t->size = size;
	h_t->array = malloc(sizeof(shash_table_t *) * size);

	if (!h_t->array)
		return (NULL);
	for (; i < size; i++)
		h_t->array[i] = NULL;

	h_t->shead = NULL;
	h_t->stail = NULL;

	return (h_t);
}


/**
 * shash_table_set - adds an element to the hash table.
 * @ht: pointer to hash table struct
 * @key: key
 * @value: valuse associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	char *copy;
	shash_node_t *new_node;

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
	new_node = malloc(sizeof(shash_node_t));
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

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key for retrieving
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *hnode;
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

/**
 * shash_table_print - Prints a hash table
 * @ht: Hash table
 * Return: None
 */
void shash_table_print(const shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *hnode;
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

/**
 * shash_table_print_rev - Prints a hash table in reverse
 * @ht: Hash table
 * Return: None
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *hnode;
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

/**
 * shash_table_delete - deletes a hash table
 * @ht: Hash table
 * Return: None
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *hnode, *aux;

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
