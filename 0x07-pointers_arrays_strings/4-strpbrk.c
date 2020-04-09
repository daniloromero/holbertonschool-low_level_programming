#include "holberton.h"

/**
 *_strchr - searches a string for any of a set of bytes.-
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
	return ('\0');
}

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s:pointer to string
 * @accept: pointer to bytes to match in s
 * Return:  pointer to byte in s that matches in accept,
 * or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept, *s))
			return ((char *) s);
		s++;
	}
	return ('\0');
}
