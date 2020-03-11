#include "function_pointers.h"
#include <stdlib.h>
/**
 *int_index - searches for an integer
 *@array: array of integers
 *@size: array size
 *@cmp: fuction as parameter
 *Return: found integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && array && size)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}
