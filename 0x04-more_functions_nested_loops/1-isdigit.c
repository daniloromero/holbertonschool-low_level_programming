#include "holberton.h"

/**
 * _isdigit - check if character is digit.
 * @c: chrater to be checked
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
