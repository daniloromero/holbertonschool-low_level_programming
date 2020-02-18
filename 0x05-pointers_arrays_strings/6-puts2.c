#include "holberton.h"
/**
 * puts2 - picks even characters
 * Description:reverse string
 * @str:string to pick even characthers
 */
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		_putchar(*(str + index));
		index = index + 2;
	}
	_putchar('\n');
}
