#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints file name followed by new line
 * @argc: counter of arguments
 * @argv:number to be multiplie
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int rslt;
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	if (argc)
		rslt = a + b;
			printf("%i\n", rslt);
			return (0);
	if (!argc)
		printf("0\n");
		return (1);
}
