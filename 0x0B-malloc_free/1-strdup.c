#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string
 * Return:0
 */
char *_strdup(char *str)
{
	char *array;
	int index;
	int size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	array = malloc(sizeof(char) * size + 1);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = str[index];
	return (array);
}
