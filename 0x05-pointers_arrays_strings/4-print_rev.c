#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * Description: prints string in reverse
 * @s:string to print
 */
void print_rev(char *s)
{
	int string = 0;

	while (s[string] != '\0')
	{
		string++;
	}
	string--;
	while (string >= 0)
	{	_putchar(s[string]);
		string--;
	}
	_putchar('\n');
}
