#include "holberton.h"
/**
 * puts_half - prints half characters of a string
 * Description:prints half  string
 * @str:string to pick even characthers
 */
void puts_half(char *str)
{
	int index = 0;
	int half;

	while (str[index] != '\0')
	{
		index++;
	}
	index--;
	if (index % 2 == 0)
	{
		half = index / 2;
	}
	else
	{
		half = (index - 1) / 2;
	}
	half++;
	while (half <= index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
