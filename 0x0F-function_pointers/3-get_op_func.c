#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - select operator and function
 *@s: string operator
 *Return: 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op[0] != s[0])
	{
		if (ops[i].op == NULL)
			return (NULL);
		i++;
	}
	return (ops[i].f);
}
