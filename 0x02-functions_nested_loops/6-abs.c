#include "holberton.h"
/**
 * _abs - print absolute number.
 *@int: print absolute number
 * Return: 0.
 */
int _abs(int ab)
{
if (ab >= 0)
{
_putchar(ab);
}
else
_putchar(ab * -1);
return (0);
}
