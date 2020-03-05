#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimun integer value
 * @max:maximum integer value
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *array;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (array == NULL)
		return (NULL);
	return (array);
}
