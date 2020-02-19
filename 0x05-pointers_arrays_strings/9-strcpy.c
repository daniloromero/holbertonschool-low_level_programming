#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy -  copies the string pointed to by src
 * Description: copies the string pointed to by src
 * @dest:destination of copy
 * @src:source to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
return (dest);
}
