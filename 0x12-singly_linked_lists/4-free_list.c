#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  adds a new node at the end of a list_t list
 * @head: pointer to head of list
 * Return: void
 */

void free_list(list_t *head)
{

	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
