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

	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (!c ? s : NULL);
}
