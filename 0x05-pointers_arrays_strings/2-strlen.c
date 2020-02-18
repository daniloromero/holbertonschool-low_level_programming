#include "holberton.h"
/**
 * _strlen - lenght of a string
 * Description: lenght of given string
 * @s:string to mesure
 * Return: always 0.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
return (length);
}
