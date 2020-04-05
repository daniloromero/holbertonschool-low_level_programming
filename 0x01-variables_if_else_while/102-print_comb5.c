#include <stdio.h>
/**
 * main -  00..99 && 00  99
 * Description: prints all possible combinations of 2 two-digit numbers. 00..99
 * Return: 0
 */
int main(void)
{
	int l = 0;
	int k;

	for (k = 1; k < 100; k++)
	{
		putchar((l / 10) + '0');
		putchar((l % 10) + '0');
		putchar(' ');
		putchar((k / 10) + '0');
		putchar((k % 10) + '0');
		if (l < 98)
		{
			putchar(',');
			putchar(' ');
		}
		if (k == 99)
		{
			l++;
			k = l;
		}
	}
	putchar('\n');
	return (0);
}
