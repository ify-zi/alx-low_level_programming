#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - create an array
* @size: size of the array
* @c: the string to be entered
* Return: return NULL is it has an error
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	str = (char *)malloc(sizeof(c) * size);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
