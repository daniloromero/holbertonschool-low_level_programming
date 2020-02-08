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

	for (l = '0'; l <= '8'; l++)
	{
		for (k = l + 1; k <= '9'; k++)
		{
			putchar(l);
			putchar(k);
			if (l == '8' && k == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
