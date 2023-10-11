#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - iterate and take an action of func
* @array: the array of item
* @size: the size of arr
* @action: pointer to function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if ((array != NULL) && (size != 0) && (action != NULL))
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
