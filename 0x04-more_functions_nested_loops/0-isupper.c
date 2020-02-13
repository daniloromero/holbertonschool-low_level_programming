#include "holberton.h"
/**
 * _isupper - check for upper case character
 * @c:evaluates if c is uppercase
 * Return: 1 for uppercase, 1 for else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
