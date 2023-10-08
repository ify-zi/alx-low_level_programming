#include "main.h"
#include <stdlib.h>

/**
* array_range - return the range of the array
* @min: minimum value
* @max: max value
*
* Return: returns the mem of the array
*/

int *array_range(int min, int max)
{
	int *arr;
	int arrsize = ((max + 1) - min);
	int i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(arrsize * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < arrsize; i++)
	{
		*(arr + i) = min + i;
	}

	return (arr);
}
