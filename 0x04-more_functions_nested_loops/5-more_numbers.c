#include "holberton.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * return always 0
 */
void more_numbers(void)
{
	int n;
	int t = 0;

	while (t < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			if ((n / 10) == 0)
			{
			}
			else
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
	_putchar('\n');
	t++;
	}
}
