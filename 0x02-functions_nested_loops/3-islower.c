#include "holberton.h"

/**
 * _islower - check for lower case character
 * @c:evaluates if c is lowercase
 * Return: 1 for lowercase, 1 for else
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{return (1);
}
else
return (0);
}
