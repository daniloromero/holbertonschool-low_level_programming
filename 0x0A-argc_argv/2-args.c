#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints file name followed by new line
 * @argc: counter of argumnts
 * @argv: received arguments that will print
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	if (argv)
		for (i = 0; i < argc; i++)
			printf("%s\n", argv[i]);
			return (0);
}
