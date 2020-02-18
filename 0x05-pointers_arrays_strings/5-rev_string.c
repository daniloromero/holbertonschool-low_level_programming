#include "holberton.h"
/**
 * rev_string - reverse string
 * Description:reverse string
 * @s:string to print
 */
void rev_string(char *s)
{
	int string = 0;
	int index = 0;

	while (s[string] != '\0')
	{
		string++;
	}
	string--;

	while (string >= 0)
	{
		*(s + index) = s[string];
		index++;
		string--;
	}
}
