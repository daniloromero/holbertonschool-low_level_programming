#include "lists.h"
/**
 * free_listint2 -  adds a new node at the end of a listint_t list.
 * @head: pointer to head of the list
 * Return: the address of the new element
 */
void free_listint2(listint_t **head)
{
	if (!head)
		return;
	if (*head)
	{
		free_listint2(&((*head)->next));
		free(*head);
		*head = NULL;
	}
}
