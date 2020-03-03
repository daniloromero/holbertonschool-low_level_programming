#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings
 * @s1: string 1
 * @s2: string 2:
 * Return:0
 */
char *str_concat(char *s1, char *s2)
{
	char *array;
	int index;
	int size1 = 0;
	int size2 = 0;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	while (size1 <= *s1)
	{
		size1++;
	}
	while (size2 <= *s2)
	{
		size2++;
	}
	array = malloc(sizeof(char) * (size1 + size2 + 1));
	if (array == NULL)
		return (NULL);
	index = 0;
	while (*s1)
	{
		array[index] = *s1;
		index++;
		s1++;
	}
	while (*s2)
	{
		array[index] = *s2;
		index++;
		s2++;
	}
	return (array);
}
