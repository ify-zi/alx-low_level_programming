#include "main.h"
#include <ctype.h>
#include <string.h>

/**
* *string_toupper - convert lowercase to upper
* @s: recieves the string or char
* Return: returns the uppercase
*/

char *string_toupper(char *s)
{
	int i;
	int len = strlen(s) - 1;

	for (i = 0; i < len; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);
}
