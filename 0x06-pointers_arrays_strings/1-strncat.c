#include "holberton.h"

/**
 * _strncat - concatenates 2 strings with byte contained in n
 * @dest:primary string
 * @src: appended string
 *@n:byte to be appended
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index;
	int index2;
	int index3;

	for (index = 0; *(dest + index) != '\0'; index++)
	{
	}
	for (index2 = 0; *(src + index2) != '\0'; index2++)
	{
	}
	if (index2 > n)
		index2 = n;
	for (index3 = 0; index3 < index2; index3++)
	{
		*(dest + index) = *(src + index3);
		index++;
	}
	return (dest);
}
