#include "lists.h"
#include <stdlib.h>

/**
 * add_node -  adds a new node at the beginning of a list_t list
 * @head:double pointer to list
 * @str: pointer to
 * Return:  number of elements in a linked list_t list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int numchar;

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	for (numchar = 1; *str; numchar++, str++)

	new_node->len = numchar;
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
