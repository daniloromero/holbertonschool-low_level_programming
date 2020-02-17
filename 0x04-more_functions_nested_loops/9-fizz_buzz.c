#include "holberton.h"
#include <stdio.h>
/**
 * main - prints number form 1 to 100  fizz buzz 3&5
 * @void: range of function 1 to 100
 * Return: always 0
 **/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		if (n % 5 == 0)
		{
			printf("Buzz");
		}
		if (!(n % 3 == 0 || n % 5 == 0))
		{
			printf("%i", n);
		}
		if (n != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
