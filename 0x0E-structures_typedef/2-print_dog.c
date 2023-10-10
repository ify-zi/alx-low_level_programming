#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_dog - prints contetn of the struct arg
* @d: pointer to the struct
*
*/

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nill)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nill)");
	}
}
