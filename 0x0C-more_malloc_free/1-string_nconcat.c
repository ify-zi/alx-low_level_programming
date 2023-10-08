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
	int i, j;
	int len = strlen(s2) - 1;
	int len1 = strlen(s1) - 1;
	int nm = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (nm < 0)
		return (NULL);
	if (nm >= len)
		nm = len;

	ptr = malloc(sizeof(*ptr) * (len1 + nm + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < nm; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
