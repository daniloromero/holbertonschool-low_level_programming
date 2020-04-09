#include "holberton.h"

/**
 *_print_chessboard - prints the chessboard.
 *@a: ponter to array
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row, j;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar('\n');
	}
}
