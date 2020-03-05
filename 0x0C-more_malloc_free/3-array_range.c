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
	int i, i2;

	if (min > max)
		return (NULL);
	i = (max - min + 1);
	array = malloc(sizeof(int) * i);
	if (array == NULL)
		return (NULL);
	for (i2 = 0; i2 < i; i2++)
		array[i2] = i2;
	return (array);
}
