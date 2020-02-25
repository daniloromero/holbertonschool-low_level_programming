#include "holberton.h"
#include <stdlib.h>

/**
 *_strchr -that locates a character in a string.
 *@s:string to scan for charachter
 *@c: fist occurrance of character to be returned
 *Return:s
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != c; index++)
	{
		if (s[index] == c)
		s = (s + index);
	}
		return (s);
	if (s[index] == c)
		return (s + index);
	return (0);
}
