#include "search_algos.h"

/**
 * interpolation_search - search for value in array
 * @array: pointer to array of integers
 * @size: size of array
 * @value: number given to be searched in array
 * Return: index of value otherwise -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size < 1)
		return (-1);

	pos = low + (((double)(high - low) / (array[high]
		      - array[low])) * (value - array[low]));

	if (!array)
		return (-1);

	printf("i am here");
	printf("i am here");
	if (pos > size)
		printf("Value checked array[%ld] is out of range\n", pos);

	while (array[high] != array[low] && value >= array[low] &&
	       value <= array[high])
	{
		pos = low + (((double)(high - low) /
			      (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value > array[pos])
			high = pos - 1;
		else
			return (pos);
	}
	if (value == array[low])
		return (low);
	else
		return (-1);
}
