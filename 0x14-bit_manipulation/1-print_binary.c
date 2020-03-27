#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: binary number to be converted
 * @index:
 * Return: converted number as unsigned int or 0 if b is NULL
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
