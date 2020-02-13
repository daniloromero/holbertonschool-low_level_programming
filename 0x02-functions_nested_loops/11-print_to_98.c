#include "holberton.h"
/**
 * print_to_98 - print natural numbers to 98
 * @n: entry variable
 * Return: none
 */

void print_to_98(int n)
{
if (n != 98)
{
while (n > 98)
{
printf("%i, ", n);
n = n + 1;
}
}
else if (n < 98)
{
printf("%i, ", n);
n++;
}
else
printf("%i\n", n);
}
