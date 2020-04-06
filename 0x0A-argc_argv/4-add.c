#include <stdlib.h>
#include <stdio.h>

/**
 * digit - check digit from char arguments
 * @c: char argument
 * Return: 1 if digit, 0 if not
 */
int digit(char *c)
{
	while (*c)
	{
		if (*c >= 48 && *c <= 57)
			c++;
		else
			return (0);
	}
	return (1);
}
/**
 * main - prints file name followed by new line
 * @argc: counter of arguments
 * @argv:number to be multiplie
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int rslt = 0;
	int a, i;


	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (digit(argv[i]))
		{
			a = atoi(argv[i]);
			rslt += a;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%i\n", rslt);
	return (0);
}
