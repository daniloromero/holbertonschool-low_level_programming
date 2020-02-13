#include "holberton.h"
/**
 * print_numbers - prints the numbers, from 0 to 9 but 2 && 4
 *
 * Return: always 0
 **/
void print_numbers(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
	if (n != '2'|| n != '4')
	{
	}
	else
	{
	_putchar(n);
		n++;
	}
	}
	_putchar("\n");
}
