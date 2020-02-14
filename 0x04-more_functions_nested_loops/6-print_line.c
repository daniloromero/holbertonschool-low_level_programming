#include "holberton.h"
/**
 * print_line - prints line
 * @n: times printed the line character
 * Return: always 0
 **/
void print_line(int n)
{
	int t = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
		while (t <= n)
		{	_putchar('_');
			t++;
		}
	_putchar('\n');
}
