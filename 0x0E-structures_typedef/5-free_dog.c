#include "dog.h"
#include <stdlib.h>


/**
* free_dog - free up dynamic mem from heap
* @d: pointer to fucnt
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
