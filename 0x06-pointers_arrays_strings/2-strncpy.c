#include "holberton.h"

/**
 * _strncpy - copys  strings with byte contained in n
 * @dest:primary string
 * @src: appended string
 *@n:byte to be appended
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{

	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for ( ; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
