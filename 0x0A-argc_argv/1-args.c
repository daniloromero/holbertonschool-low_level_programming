#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the number of arguments
 * @argc: counter of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argv)
	printf("%i\n", (argc - 1));
	return (0);
}
