#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head:double pointer to list
 * @str: pointer to string
 * Return: address of new element in a linked list_t list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int numchar;

	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	for (numchar = 1; *str; numchar++, str++)
	new_node->len = numchar;
	new_node->next = NULL;
	while(head->next != NULL)
		head = head->next;
	head->next = new_node;
	new_node->next = NULL;
	return (*head);
}
