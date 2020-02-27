#include "holberton.h"

/**
 * _product - returns result z * z
 * @z: multiplier
 * @n:expected result
 * Return: 0
 */
int _product(int z, int n)
{
	if (z > n)
		return (-1);
	if ((z * z) == n)
		return (z);
	z++;
	return (_product(z, n));
}



/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: given number
 * Return:0 .
 */
int _sqrt_recursion(int n)
{
	int z = 2;

	if (n == 1)
		return (1);
	return (_product(z, n));
}
