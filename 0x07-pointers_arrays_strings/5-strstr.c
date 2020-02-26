#include "holberton.h"

/**
 *_strstr -  searches in a string  any of a set of bytes.
 *@haystack: primary string to scan  substring
 *@needle: substring to be match
 *Return:s
 */
char *_strstr(char *haystack, char *needle)
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
