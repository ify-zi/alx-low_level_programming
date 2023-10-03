#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *_strdup - retruns a duplicate of the string
* @str: accepts the str to be duplicated
* Return: returns pointer to str duplicate
*/

char *_strdup(char *str)
{
	char *s;
	int len = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	s = (char *)malloc(sizeof(str) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	strcpy(s, str);

	return (s);
}
