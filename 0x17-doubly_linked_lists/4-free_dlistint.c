#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint -  free a dlistint_t list.
 * @head: pointer to head of the list
 * Return:
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *aux;

	aux = head;
	while (head)
	{
		aux = aux->next;
		free(head);
		head = aux;
	}
}
