#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print natural numbers to 98
 * @n: entry variable
 * Return void:
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
			n = n - 1;
		if (n < 98)
			n = n + 1;
	}
	printf("%d\n", n);
	}
