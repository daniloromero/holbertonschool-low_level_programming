#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to head of the list
 * @index: index to be returned
 *
 * Return: nth node of the linked list or NULL if index does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *aux = head;
	unsigned int counter = 0;

	while (aux)
	{
		if (counter == index)
			return (aux);
		aux = aux->next;
		counter++;
	}
	return (NULL);
}
