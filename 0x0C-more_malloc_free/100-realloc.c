#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
* *_realloc - reallocates mem from a pointer
* @ptr: pointer of the address
* @old_size: the old size of the pointer
* @new_size: the new size of the ptr
* Return: return pointer to new mem
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);

		if (new_ptr == NULL)
			return (NULL);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if ((new_size > old_size) && (ptr != NULL))
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (new_ptr);
		/*Copy the contents of the old memory to the new memory*/
		for (i = 0; i < old_size; i++)
			new_ptr[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (new_ptr);
}
