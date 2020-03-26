#include "lists.h"
/**
 * free_listint2 -  adds a new node at the end of a listint_t list.
 * @head: pointer to head of the list
 * Return: the address of the new element
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	if (*head == NULL)
		return;
	for (current = *head; current != NULL; current = *head)
	{
		*head = current->next;
		free(current);
	}
	*head = NULL;
}
