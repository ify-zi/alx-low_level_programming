#include "function_pointers.h"
#include <stdlib.h>

/**
* int_index - compare the args
* @array: the arr to cmp
* @size: size of arr
* @cmp: function that compare
*
* Return: return the arr
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array != NULL) && (cmp != NULL))
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);

		}
	}
	return (-1);
}
