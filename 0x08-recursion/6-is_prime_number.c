#include "holberton.h"

/**
 * prime_num - evaluates if number n is prime
 * @n: int
 * @two: int 2 base case for prime number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 **/

int prime_num(int n, int two)
{
	if (n <= 1)
		return (0);
	else if (n == two)
		return (1);
	else if (n % two == 0)
		return (0);
	else
		return (prime_num(n, (two + 1)));
}

/**
 * is_prime_number - evaluates if a number is prime
 * @n: int
 * Return: 1 if the input integer is a prime number, otherwise return 0
 **/

int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
