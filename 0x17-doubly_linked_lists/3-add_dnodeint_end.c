#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: head of list
 * @n: data for new node
 * Return: number of nodes
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *aux = *head;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (!*head)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}

	while (aux->next)
		aux = aux->next;

	aux->next = newnode;
	newnode->prev = aux;
	newnode->next = NULL;
	return (newnode);
}
