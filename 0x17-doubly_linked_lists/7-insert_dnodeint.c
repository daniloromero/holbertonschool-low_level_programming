#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head of list
 * @idx: index to add node
 * @n: value for new node
 * Return: address to new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *aux;
	unsigned int counter = 0;

	if (!*h)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
		return (newnode);
	}
	counter++;
	aux = *h;
	while (aux)
	{
		if (idx == 0)
		{
			newnode->prev = NULL;
			newnode->next = *h;
			(*h)->prev = newnode;
			*h = newnode;
			return (newnode);
		}
		if (idx == counter)
		{
			newnode->next = aux;
			newnode->prev = aux->prev;
			aux->prev = newnode;
			return (newnode);
		}
		counter++;
		aux = aux->next;
	}
	return (newnode);
}
