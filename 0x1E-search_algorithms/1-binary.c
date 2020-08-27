#include "search_algos.h"

/**
 * binary_search - searches for value in sorted array of integers using
 * binary search algotirthm
 * @array: pointer to array of integers
 * @size: size of array
 * @value: integers to serach for
 * Return: index of value otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t j,  L = 0, R = size - 1, m;

	if (array == NULL || size < 1)
		return (-1);

	while (L <= R)
	{
		m = (L + R) / 2;
		j = L;
		printf("Searching in array: ");
		for (; j < R; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);
		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}

