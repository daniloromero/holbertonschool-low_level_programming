#include "holberton.h"
/**
 * print_diagonal - prints diagonal on terminal
 * @n: size of the diagonal
 * Return: always 0
 **/
void print_diagonal(int n)
{
	int slash = 0;
	int space;

	while (slash < n)
	{
		space = 1;
		while (space <= slash)
		{
			_putchar(' ');
			space++;
		}
		_putchar('\\');
		_putchar('\n');
		slash++;
	}
	if (n <= 0)
		_putchar('\n');
}
