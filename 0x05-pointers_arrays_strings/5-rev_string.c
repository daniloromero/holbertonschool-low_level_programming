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
	char tmp;

	while (s[string] != '\0')
	{
		string++;
	}
	string--;

	while (index < string)
	{
		tmp = s[index];
		s[index] = s[string];
		s[string] = tmp;
		index++;
		string--;
	}
}
