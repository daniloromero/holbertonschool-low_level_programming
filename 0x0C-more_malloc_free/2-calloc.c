#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb:element number
 * @size:element size
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *elmt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	elmt = malloc(nmemb * size);
	if (elmt == NULL)
		return (NULL);
	for (i = 0; i < size * nmemb; i++)
		elmt[i] = 0;
	return (elmt);
}
