#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: number of elements in array
 * Return:0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	array = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	for (index = 0; index < size; index++)
		array[index] = c;
	return (array);

}
