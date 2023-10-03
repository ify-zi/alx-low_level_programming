#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *str_concat - return pointer to a new concat str
* @s1: the frist string
* @s2: the second string
* Return: returns the concat of the two string
*/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, a, b;
	char *strjoin;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	strjoin = malloc(sizeof(char) * (i + j + 1));

	if (strjoin == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		strjoin[a] = s1[a];

	for (b = 0; b < j; a++, b++)
		strjoin[a] = s2[b];

	return (strjoin);
}
