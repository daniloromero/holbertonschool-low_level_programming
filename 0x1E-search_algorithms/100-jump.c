#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searches for value in sorted array of integers using
 * jump search algotirthm
 * @array: pointer to array of integers
 * @size: size of array
 * @value: integers to serach for
 * Return: index of value otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t j = 0, m = 0, i = 0;

	if (array == NULL || size < 1)
		return (-1);

	while (array[j] < value && j < size)
	{
		printf("Value checked array[%d] = [%d]\n", (int)j, array[j]);
			i = j;
			m += sqrt(size);
			j = m;
	}
	printf("Value found between indexes [%d] and [%d]\n", (int)i, (int)j);

	for (; array[i] <= value; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (i >= size - 1)
			return (-1);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
