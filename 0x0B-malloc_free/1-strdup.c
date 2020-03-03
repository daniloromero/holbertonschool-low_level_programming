#include "holberton.h"
#include <stdio.h>
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

	if (str == '\0')
		return (NULL);
	while (size <= *str)
	{
		size++;
	}
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = str[index];
	return (array);
}
