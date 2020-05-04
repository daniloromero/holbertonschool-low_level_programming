#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of the linked list
 * @head: pointer to head of the list
 *
 * Return: 0 if empty list, sum of data otherwise
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	if (!aux)
		return (0);
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
