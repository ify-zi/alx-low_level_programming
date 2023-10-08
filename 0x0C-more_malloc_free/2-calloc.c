#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* _calloc - create a malloc for num of arry
* @nmemb: the number of items
* @size: sive of variable
*
* Return: return the memory address
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	int i;
	int items = nmemb;
	int memsize = size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(items * memsize);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < (items * memsize); i++)
	{
		*((char *)(arr) + i) = 0;
	}
	return (arr);
}
