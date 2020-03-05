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
	void *elmt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	elmt = malloc(nmemb * size);
	if (elmt == NULL)
		return (NULL);
	return (elmt);
}
