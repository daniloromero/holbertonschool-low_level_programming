#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints number of coins + new line
 * @argc: counter of arguments
 * @argv:number to be slplit in coins
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int rslt = 0;
	int a;

	a = atoi(argv[1]);
	while (a > 0)
	{
		if (a >= 25)
			a -= 25;
		else if (a >= 10)
			a -= 10;
		else if (a >= 5)
			a -= 5;
		else if (a >= 2)
			a -= 2;
		else if (a >= 1)
			a -= 1;
		rslt++;
	}
	printf("%i\n", rslt);
	return (0);
	if (a < 0)
	{
		printf("0\n");
		return (0);
	}
	if (!argc)
	{
		printf("Error\n");
		return (1);
	}
}
