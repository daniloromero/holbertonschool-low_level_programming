#include "holberton.h"

/**
 * set_bit - .returns the value of a bit at a given index.
 * @n: binary number to get bit from
 * @index: bit's position to be extracted
 * Return: converted number as unsigned int or 0 if b is NULL
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new_bit;

	if (index > 64)
		return (-1);
	new_bit = 1 << index;
	*n = *n | new_bit;
	return (1);
}
