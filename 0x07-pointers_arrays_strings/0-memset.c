#include "holberton.h"
#include <stdlib.h>

/**
 *_memset - fills the first @b bytes of memory area with a constant byte
 *@s:pointer to the memory area to be filled
 *@b: characther to fill memory area
 *@n: numbers of bytes to be fed to b
 *Return:s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *p = s;

	for (index = 0; index < n; index++)
		p[index] = b;
	return (s);
}
