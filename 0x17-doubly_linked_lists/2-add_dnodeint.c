#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint -  adds a new node at the beginning of a dlistint_t list.
 * @head: head of list
 * @n: data for new node
 * Return: number of nodes
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (!head)
		return (NULL);

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head)
		(*head)->prev = newnode;
	*head = newnode;

	return (newnode);
}
