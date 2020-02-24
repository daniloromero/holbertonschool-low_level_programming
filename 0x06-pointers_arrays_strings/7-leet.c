#include "holberton.h"

/**
 * leet -encodes string to 1337
 * @s:sample of characters
 * Return:s
 */
char *leet(char *s)
{
	int index1;
	int index2;
	char *txt = "aAoOlLeEtT";
	char *enc = "4400113377";

	for (index1 = 0; s[index1]; index1++)
	{
		for (index2 = 0; txt[index2]; index2++)
		{
			if (s[index1] == txt[index2])
			{
				s[index1] = enc[index2];
			}
		}
	}
	return (s);
}
