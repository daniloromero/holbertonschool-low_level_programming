#include "holberton.h"
/**
 * print_last_digit - prints last digit.
 * @ld: last digit
 * Return: ld.
 */
int print_last_digit(int ld)
{
ld = ld % 10;
if (ld < 0)
{
ld = ld  * -1;
}
_putchar(ld + '0');
return (ld);
}
