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
		if (index == 0 || index % 2 == 0)
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
