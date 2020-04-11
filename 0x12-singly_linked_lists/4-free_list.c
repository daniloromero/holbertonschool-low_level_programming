#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  adds a new node at the end of a list_t list
 * @head:double pointer to list
 * @str: pointer to string
 * Return: address of new element in a linked list_t list
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
