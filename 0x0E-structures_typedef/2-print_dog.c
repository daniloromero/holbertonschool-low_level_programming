#include <stdio.h>
#include "dog.h"


/**
 * print_dog - prints struct dog+owner+age
 * @d: pointer to struct dog
 * Dog's basic info:
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d)
	{
	printf("Name: %s\n", d->name ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
