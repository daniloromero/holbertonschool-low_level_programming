#include "holberton.h"

/**
 * cap_string -Uppercase for everyword
 * @s:arrray of characters
 * Return:s
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		while (*(s + i) == ' ' || *(s + i) == '\n' ||
			*(s + i) == '\t' || *(s + i) == '.' || *(s + i) == '"')
		{
			i++;
			if (*(s + i) >= 'a' && *(s + i) <= 'z')
				*(s + i) = (*(s + i) - ' ');
		}
	}
	return (s);
}
