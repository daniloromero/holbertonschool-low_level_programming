#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l = 'z';

	for (l = 'z'; l >= 'a';l--)
		putchar(l);
		l--;
	putchar('\n');
	return (0);
}
