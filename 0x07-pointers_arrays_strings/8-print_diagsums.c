#include "holberton.h"

/**
 *_print_diagsums -  searches in a string  any of a set of bytes.
 *@a: primary string to scan  substring
 *@size: substring to be match
 *Return:s
 */
void print_diagsums(int *a, int size)
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
