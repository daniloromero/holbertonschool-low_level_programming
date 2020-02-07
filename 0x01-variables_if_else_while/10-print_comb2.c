#include <stdio.h>
/**
 * main -  00...99
 * Description: prints numbers 00...99
 * Return: 0
 */
int main(void)
{
	int l;
	int k;

	for (l = '0'; l <= '9'; l++)
	{
		for (k = '0'; k <= '9'; k++)
		{
			putchar(l);
			putchar(k);
		if (l != '9' || k != '9')
		{
			putchar(',');
			putchar(' ');
		}

		}
	}
	putchar('\n');
	return (0);
}
