#include "holberton.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: check if c is alphabetic character
 * Return: 1 for alphabetuc character, o for else
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
else
return (0);
}
