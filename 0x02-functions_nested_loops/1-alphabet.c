#include "holberton.h"
/**
 * main - print alphabet
 *Description  prints the alphabet, in lowercase
 lphabet, in lowercase* Return: Always 0.
 */

void print_alphabet(void)
{
char abc;
for (abc = 'a'; abc <= 'z'; abc++)
{
_putchar(abc);
}
_putchar('\n');

}
