#include "holberton.h"

/**
 * cap_string -Uppercase for everyword
 * @s:arrray of characters
 * Return:s
 */
char *cap_string(char *s)
{
	int index;

	for (index = 0; *(s + index) != '\0'; index++)
	{
		while (*(s + index) == ' ' || *(s + index) == '\n' ||
				*(s + index) == '\t' || *(s + index) == '.')
		{
			index++;
			if (*(s + index) >= 'a' && *(s + index) <= 'z')
				*(s + index) = (*(s + index) - ' ');
		}
	}
	return (s);
}
