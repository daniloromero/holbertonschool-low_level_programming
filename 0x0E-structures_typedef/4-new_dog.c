#include "dog.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * @str: string
 * Return:0
 */
char *_strdup(char *str)
{
	char *array;
	int index;
	int size = 0;

	if (str == NULL)
		return (NULL);
	while (str[size] != '\0')
	{
		size++;
	}
	array = malloc(sizeof(char) * size + 1);
	if (array == NULL)
		return (NULL);
	for (index = 0; index <= size; index++)
		array[index] = str[index];
	return (array);
}
/**
 * new_dog - creates a new dog
 * @name: pointer to name
 * @age:age
 * @owner:pointer to owner
 *Return: pointer to doggy
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy = NULL;
	char *newname = NULL;
	char *newowner = NULL;

	newname = _strdup(name);
	if (!newname)
		return (NULL);
	newowner = _strdup(owner);
	if (!newowner)
	{
		free(newname);
		return (NULL);
	}
	doggy = malloc(sizeof(dog_t));
	if (!doggy)
	{
		free(newname);
		free(newowner);
		return (NULL);
	}
	doggy->name = newname;
	doggy->age = age;
	doggy->owner = newowner;
	return (doggy);
}
