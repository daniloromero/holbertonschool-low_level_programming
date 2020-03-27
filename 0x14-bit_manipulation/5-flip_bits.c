#include "holberton.h"

/**
 * flip_bits -  returns the number of bits you would need to 
 * flip to get from one number to another.
 * @n: binary number to set bit 
 * @m: bit's position to be set
 * Return: 1 for succes -1 for error
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int new_bit;

	if (index > 64)
		return (-1);
	new_bit = 1 << index;
	*n = *n & ~new_bit;
	return (1);
}
