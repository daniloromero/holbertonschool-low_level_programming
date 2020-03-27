#include "holberton.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: binary number to set bit 
 * @index: bit's position to be set
 * Return: 1 for succes -1 for error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int new_bit;

	if (index > 64)
		return (-1);
	new_bit = 1 << index;
	*n = *n & ~new_bit;
	return (1);
}
