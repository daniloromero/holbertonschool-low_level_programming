#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h:pointer to list
 * Return: lentgh of string.
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n"), h = h->next, i++;
		printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
