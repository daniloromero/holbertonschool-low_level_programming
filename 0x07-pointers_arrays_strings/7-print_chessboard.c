#include "holberton.h"

/**
 *_print_chessboard -  searches in a string  any of a set of bytes.
 *@a: primary string to scan  substring
 *Return:s
 */
void print_chessboard(char (*a)[8])
{
	int j = 0;


	if (!*needle)
		return (haystack);
	for (j = 0; *haystack; haystack++)
	{
		if (*haystack == *needle)
		{
			needle++;
			j++;
		}
		else
		{
			(needle = needle - j);
			j = 0;
		}
		if (!*needle)
		{
			haystack = haystack - j + 1;
			return (haystack);
		}
	}
	return (haystack);
}
