#include "search_algos.h"

/**
 * jump_search - search for value in array
 * @array: pointer to array of integers
 * @size: size of array
 * @value: number given to be searched in array
 * Return: index of value otherwise -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0, tmp = 0, tmp_2 = 0, min;

	if (array == NULL || size < 1)
		return (-1);

	min = prev < step ? prev - 1 : step - 1;
	while (array[min] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		tmp = prev;
		prev = step;
		step += sqrt(size);
		min = prev < step ? prev - 1 : step - 1;
		if (tmp >= size)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", tmp, prev);
	while (array[tmp] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", tmp, array[tmp]);
		tmp_2 = tmp;
		tmp += 1;
		if (tmp == step || tmp == size)
			return (-1);
	}
	if (array[tmp_2] == value)
		return (tmp_2);
	return (-1);
}
