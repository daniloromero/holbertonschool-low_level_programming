#include "lists.h"
/**
 * free_istint -   frees allocated memory for listint_t list
 * @head: pointer to head of the list
 * Return: the address of the new element
 */
void free_listint(listint_t *head)
{
	listint_t *current;

	for (current = head; current; current = head)
	{
		head = head->next;
		free(current);
	}
}
