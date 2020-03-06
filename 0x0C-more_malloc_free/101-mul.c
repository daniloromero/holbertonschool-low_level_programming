#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 integers
 * @argc: counter of arguments
 * @argv:number to be multiplie
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long int mul;
	long int num1 = atoi(argv[1]);
	long int num2 = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc)
	{
		mul = num1 * num2;
			printf("%li\n", mul);
	}
	return (0);
}
