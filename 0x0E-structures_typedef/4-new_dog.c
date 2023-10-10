#include "dog.h"
#include <stdlib.h>

/**
* new_dog - creates an instances of dog_t
* @name: dog name
* @age: dog age
* @owner: dog's owner
* Return: retur NUll if fail
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;

	new_d = malloc(sizeof(dog_t));

	if (new_d == NULL)
	{
		free(new_d);
		return (NULL);
	}

	new_d->name = name;
	new_d->age = age;
	new_d->owner = owner;

	if ((new_d->name == NULL) || (new_d->owner == NULL))
	{
		return (NULL);
	}
	else
		return (new_d);
}
