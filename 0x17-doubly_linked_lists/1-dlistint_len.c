#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns number of elements of a dlistint_t list
 * @h: head of list
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
