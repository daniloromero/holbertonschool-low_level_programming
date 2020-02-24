#include "holberton.h"

/**
 * string_toupper -inverse lower case to uppercase
 * @s:arrray of characters
 * Return: s
 */
char *string_toupper(char *s)
{
	int index;

	for (index = 0; *(s + index) != '\0'; index++)
	{
		if (*(s + index) >= 'a' && *(s + index) <= 'z')
			*(s + index) = (*(s + index) - ' ');
	}
	return (s);
}
