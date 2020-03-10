#include "holberton.h"

/**
 * rot13 -encodes string to rot13
 * @s:sample of characters
 * Return:s
 */
char *rot13(char *s)
{
	int index1;
	int index2;
	char *txt = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *enc = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (index1 = 0; s[index1] != '\n'; index1++)
	{
		for (index2 = 0; txt[index2]; index2++)
		{
			if (s[index1] == txt[index2])
			{
				s[index1] = enc[index2];
				break;
			}
		}
	}
	return (s);
}
