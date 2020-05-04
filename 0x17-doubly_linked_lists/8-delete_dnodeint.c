#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: pointer to head of the list
 * @index: node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux;

	if (!head)
		return (-1);
	aux = *head;
	if (index == 0)
	{
		if (aux->next)
			(*head)->next->prev = NULL;
		*head = (*head)->next;
		free(aux);
		return (1);
	}
	return (1);
}
