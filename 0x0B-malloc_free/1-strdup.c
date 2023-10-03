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
	int len;
	int i;

	if (str == NULL)
		return (NULL);

	for (len = 0; str[len] != '\0'; len++)
		;
	s = (char *)malloc(sizeof(char) * (len + 1));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
		s[i] = str[i];

	return (s);
}
