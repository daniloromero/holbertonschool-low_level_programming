#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - performs simple arithmetic operations
 * @argc: number or arguments
 * @argv: inputarguments
 * Return
 */

int main(int argc, char *argv[])
{
	char *s = NULL;
	int num1 = 0;
	int num2 = 0;
	int rslt = 0;

	if(argc != 4)
		printf("Error\n");
		exit(98);
	s = argv[2];
	num2 = atoi(argv[3]);
	num1 = atoi(argv[1]);
	rslt = get_op_func(s)(num1, num2);
	if (rslt == 0 )
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", rslt);
	return (0);
}
