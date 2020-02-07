#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l = 'z';

	while (l <= 'z')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
