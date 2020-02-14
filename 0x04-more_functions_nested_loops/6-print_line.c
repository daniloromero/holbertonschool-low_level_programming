#include "holberton.h"
/**
 * print_line - prints line
 * @n: times printed the line character
 * Return: always 0
 **/
void print_line(int n)
{
	int t;

	if (n > 0)
	{
		t = 0;
		while (t < n)
		{	_putchar('_');
			t++;
		}
	}
	_putchar('\n');

}
