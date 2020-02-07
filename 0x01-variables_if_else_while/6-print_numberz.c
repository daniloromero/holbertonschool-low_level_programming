#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0x30;

	for (; n <= 0x39; ++n)
	{
		putchar(n);

	}
	putchar('\n');
	return (0);
}
