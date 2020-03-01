#include <stdio.h>

/**
 * main - prints file name followed by new line
 * @argc:counter of arguments
 * @argv: name of file unique argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
