#include "search_algos.h"

/**
 * linear_search - searches for value in array of integers using Linear search
 * @array: pointer to array of integers
 * @size: size of array
 * @value: integers to serach for
 * Return: index of value otherwise -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

