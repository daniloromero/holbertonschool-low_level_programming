#include "lists.h"
/**
 * add_nodeint_end -  adds a new node at the end of a listint_t list.
 * @head: pointer to head of the list
 * @n: new node to be added
 * Return: the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t)), *current = NULL;

	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	current = *head;
	if(!current)
	{
		*head =new_node;
		return (*head);
	}
	while (current->next)
		current = current->next;
	current->next = new_node;
	return (*head);
}
