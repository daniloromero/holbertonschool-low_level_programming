#include "search_algos.h"

/**
 * binnary_search - search for value in array
 * @array: pointer to array of integers
 * @size: size of array
 * @value: number given to be searched in array
 * Return: index of value otherwise -1
 */

int binnary_search(int *array, size_t size, int value)
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

/**
 * exponential_search - search for value in array
 * @array: pointer to array of integers
 * @size: size: of array
 * @value: number given to be searched in array
 * Return: index of value otherwise -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, init, i_subarray;
	int *binary = &array[0];

	if (array == NULL || size < 1)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		init = bound;
		bound *= 2;
	}
	if (bound >= size)
		bound = size - 1;
	binary = &(array[init]);
	printf("Value found between indexes [%ld] and [%ld]\n", init, bound);
	i_subarray = (binnary_search(binary, (bound - init) + 1, value));
	if (i_subarray == (size_t)-1)
		return (-1);
	else
	       	return (init + i_subarray);
}
