#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog+owner+age
 * @name: dog name
 * @owner: dog's owner
 * @age: dog's age
 * Dog's basic info
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
