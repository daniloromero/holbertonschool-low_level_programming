#include <stdio.h>
/**
 * main -   Inventing is a combination
 * Description:a program prints all possible different combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int l;
	int k;
	int j;

	for (l = '0'; l <= '7'; l++)
	{
		for (k = l + 1; k <= '8'; k++)
		{
			for (j = k + 1; j <= '9'; j++)
			{
				putchar(l);
				putchar(k);
				putchar(j);
			if (l == '7' && k == '8' && j == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
