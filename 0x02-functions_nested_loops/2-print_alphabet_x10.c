 #include "holberton.h"
/**
 * print_alphabet_x10 - 10 x alphabet
 * description print alphabet 10 times
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
char abc;
int i = 0;

while (i < 10)
{
for (abc = 'a'; abc <= 'z'; ++abc)
{
_putchar(abc);
}
_putchar('\n');
++i;
}
}
