#include "holberton.h"

/**
 *_strlen_recursion - prints lentgh of a string
 *@s: string to get length
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	else
		return (0);
}
