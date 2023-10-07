#include "main.h"
#include <stdlib.h>


/**
* malloc_checked - function alloc mem and checked if failed
* @b: int of the mem
*
* Returns: retunr the pointer
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
