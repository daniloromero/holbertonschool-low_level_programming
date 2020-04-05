#include·<stdio.h>¶
/**
 * main - 00..99 && 00 99
 * Description: prints allpossible combinations of 2 digit numbers 00..99
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
		putchar('·');
		putchar((k / 10) + '0');
		putchar((k % 10) + '0');
		if (l < 98)
		{
			putchar(',');
			putchar('·');
		}
		if (k == 99)
		{
			l++;
			k = 1;
		}
	}
	putchar('\n');
	return (0);
}
