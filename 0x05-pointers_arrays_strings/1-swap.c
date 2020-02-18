#include "holberton.h"
/**
 * swap_int - swaps value of 2 integers
 * @a:integer #1
 * @b: integer #2
 * Return: always 0.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
