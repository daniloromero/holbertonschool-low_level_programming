#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return:integer
 */

int _atoi(char *s)
{
	int i = 0, neg = 1, integer = 0;

	while (s[i])
	{
		if (s[i] == '-')
			neg = neg * -1;
		i++;
	}
	i = 0;
	while (*s)
	{
		if ((s[i] >= '0' || s[i] <= '9') && s[i] != 0)
		{
			integer = integer * 10 + (s[i] - '0');
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
		i++;
	}
	return (integer * neg);
}
