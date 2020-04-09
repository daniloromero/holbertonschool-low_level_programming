#include "holbeton.h"
#include <stdio.h>
/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return:integer
 */

int _atoi(char *s)
{
	int i = 0, neg = 1, integer = 0;

	while (s[i] < '0' || s[i] > '9') && s[i])
	{
		if (s[i] == '-')
			neg = neg * -1;
		i++;
	}
	while(s[i] >= '0' || s[i] <= '9')
	{
		if (integer >= 0)
			integer = integer * 10 + (s[i] - '0');
	}
	return (integer * neg);
}