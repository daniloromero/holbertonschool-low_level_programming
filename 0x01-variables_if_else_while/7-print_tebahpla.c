#include <stdio.h>
/**
 * main - Smile in the mirror
 *Description: alphabet reversed order
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l ;

	for ( l = 'z'; l >= 'a'; l--)
		putchar(l);
	putchar('\n');
	return (0);
}
