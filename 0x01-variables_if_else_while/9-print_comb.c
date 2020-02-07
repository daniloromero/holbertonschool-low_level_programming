#include <stdio.h>
/**
 * main -  unbeatable combination
 * Description: prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = '0'; l <= '9'; l++)
	{
		putchar(l);
		if (l < '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
			putchar('\n');
	}
	return (0);
}
