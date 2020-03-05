#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: input # of rguments
 * @av: input arguments
 * Return:0  pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int c, i, cnct = 0;
	int k, f, plus = 0;
	char *str;

	if (ac == 0 || ac == '\0')
	return (NULL);

	for (c = 0; c < ac; c++)
	{
		for (i = 0; av[c][i]; i++)
		{
			cnct++;
		}
		cnct++;
	}
	cnct++;
	str = malloc(sizeof(char) * cnct);
	if (!str)
		return (NULL);
	for (k = 0; k < ac; k++)
	{
		for (f = 0; av[k][f]; f++)
		{
			str[plus] = av[k][f];
			plus++;
		}
		str[plus] = '\n';
		plus++;
	}
	str[plus] = '\0';
	return (str);
}
