#include "holberton.h"

/**
 *_strchr - that locates a character in a string.
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
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string
 * @accept: pointer to sample of bytes
 * Return: bytes from sample in string
 */
unsigned int _strspn(char *s, char *accept)
{
	int byte = 0;

	while (*s && _strchr(accept, *s))
	{
		s++;
		byte++;
	}
	return (byte);
}
