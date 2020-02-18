#include "holberton.h"
/**
 * _puts - prints a string
 * Description: prints string folled by \n
 * @str:string to print
 */
void _puts(char *str)
{
	int string = 0;

	while (str[string] != '\0')
	{
		_putchar(str[string]);
		string++;
	}
	_putchar('\n');
}
