#include "holberton.h"
/**
 * print_square - prints square on terminal
 * @size: size ofsquare
 * Return: always 0
 **/
void print_square(int size)
{
	int height = 0;
	int width;

	while (height < size)
	{
		width = 0;
		while (width < size)
		{
			_putchar('#');
			width++;
		}
		_putchar('\n');
		height++;
	}
}
