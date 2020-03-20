#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end -  adds a new node at the end of a list_t list
 * @head:double pointer to list
 * @str: pointer to string
 * Return: address of new element in a linked list_t list
 */

void free_list(list_t *head)
{

	list_t *tmp,*box;

	tmp = head;
	while (!head)
	{
		box = tmp->next;

		free(box);
		tmp = box;
	}
	return (*head);
}
