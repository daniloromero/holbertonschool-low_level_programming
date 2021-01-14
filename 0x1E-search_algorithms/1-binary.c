#include "search_algos.h"

/**
 * binary_search - search for value in array
 * @array: pointer to array of integers
 * @size: size of array
 * @value: number given to be searched in array
 * Return: index of value otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, L = 0;
	size_t R = size - 1;
	size_t m;

	if (array == NULL || size < 1)
		return (-1);

	while (L <= R)
	{
		m = (L + R) / 2;
		i = L;
		printf("Searching in array: ");
		for (; i < R; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
