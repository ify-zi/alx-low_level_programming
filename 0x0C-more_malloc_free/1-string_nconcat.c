#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* string_nconcat - concats two string
* @s1: first string
* @s2: second string
* @n: number of string to be concated
*
* Return: pointer tp cpncat string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j;
	unsigned int len = strlen(s2) - 1;
	unsigned int len1 = strlen(s1) - 1;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n <= 0)
		return (NULL);
	if (n >= len)
		n = len;

	ptr = malloc(sizeof(*ptr) * (len1 + len + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j <= n; j++)
	{
		ptr[i + j] = s2[j];
	}
	ptr[i + j] = '\0';
	return (ptr);
}
