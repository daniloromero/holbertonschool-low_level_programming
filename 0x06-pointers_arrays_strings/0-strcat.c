#include "holberton.h"

/**
 * _strcat - concatenates 2 strings and adds null bite
 * @dest:primary string
 * @src: appended string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int index;

	for (index = 0; *(dest + index) != '\0'; index++)
	{
	}
	for (; *src != '\0'; src++)
	{	*(dest + index) = *src;
		index++;

	}
	return (dest);
}
