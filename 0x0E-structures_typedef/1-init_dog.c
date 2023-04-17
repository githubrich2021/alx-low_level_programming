#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Entry point
 * @d: dog to initialize
 * @name: initialize name
 * @age: age
 * @owner: initialize owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
