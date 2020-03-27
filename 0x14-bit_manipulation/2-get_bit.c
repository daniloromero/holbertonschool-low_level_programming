#include "holberton.h"

/**
 * get_bit - .returns the value of a bit at a given index.
 * @n: binary number to get bit from
 * @index: bit's position to be extracted
 * Return: converted number as unsigned int or 0 if b is NULL
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return ((n >> index) & 1);
}
