#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory using malloc and free
 * @ptr:pointer to memory allocated
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
		free(ptr);
		return (NULL);
	ptr = malloc(sizeof(char) * new_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
