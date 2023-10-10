#include "dog.h"
#include <stdlib.h>

/**
* init_dog - initalises a struct
* @d: pointer to the name of the instance
* @name: dog name
* @age: age of dog
* @owner: the owner of the dog
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
