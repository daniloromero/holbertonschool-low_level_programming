#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints element of an array of integers
 * Description:prints element of an array of integers
 * @a:pointer to array
 * @n:index position of integer
 */
void print_array(int *a, int n)
{
	int index = 0;

	while (index < n)
	{
		printf("%d", a[index]);
		index++;
		printf(", ");
	}
	printf("\n");
}
