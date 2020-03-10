#include "holberton.h"

/**
 * reverse_array -reverses order of array elements
 * @a: array position
 * @n: # of items in array
 * Return: dest
 */
void reverse_array(int *a, int n)
{
	int index;
	int tmp;

	for (index = 0; index < n; index++, n--)
	{
		tmp = a[index];
		a[index] = a[n - 1];
		a[n - 1] = tmp;
		a++;
		n--;

	}
}
