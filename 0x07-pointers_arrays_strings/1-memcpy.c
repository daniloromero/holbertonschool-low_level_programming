#include "holberton.h"
#include <stdlib.h>

/**
 *_memcpy - copies memory area with a constant n bytes
 *@dest:pointer to the memory area to be filled
 *@src: pointers fto be copied
 *@n: numbers of bytes to be copyed to b
 *Return:s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *p = dest;

	for (index = 0; index < n; index++)
		p[index] = src[index];
		src++;
	return (dest);
}
