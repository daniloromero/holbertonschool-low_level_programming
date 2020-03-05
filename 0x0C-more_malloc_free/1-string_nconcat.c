#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2:.
 * @n: number of charachters to concatenate
 * Return: pointer to new memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	int index;
	int size1 = 0;
	unsigned int size2 = 0;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";
	while (*(s1 + size1) != '\0')
	{
		size1++;
	}
	while (s2[size2] != '\0')
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
	while (size2 < n)
	{
		array[index] = *s2;
		index++;
		s2++;
	}
	return (array);
}
