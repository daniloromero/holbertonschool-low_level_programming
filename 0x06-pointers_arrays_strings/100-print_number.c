#include "holberton.h"

/**
 *  print_number -print an integer
 * @n: given integer
 * Return: void
 */
void print_number(int n)
{
	int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = i * -1;
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + 48);
}
