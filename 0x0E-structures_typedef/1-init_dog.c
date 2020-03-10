#include "dog.h"


/**
 * init_dog - dog+owner+age
 * @d: pointer to struct dog
 * @owner: dog's owner
 * @age: dog's age
 * @name: dog's name
 * Dog's basic info:
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
