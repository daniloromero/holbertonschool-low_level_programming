#include "holberton.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string  number to be converted
 * Return: converted number as unsigned int or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number;

	if (b == NULL)
		return (0);
	for (number = 0; *b; b++)
	{
		if (*b == '1')
			number = (number << 1) | 1;
		else if (*b == '0')
			number = number << 1;
		else
			return (0);
	}
	return (number);
}
