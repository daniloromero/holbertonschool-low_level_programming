#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: pointer to head of the list
 * @index: node position to be returned
 * Return: head node’s data (n).
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i_node = 0;

	while (i_node < index)
	{
		if (current == NULL)
			return (0);

		current = current->next;
		i_node++;
	}
	return (current);
}
