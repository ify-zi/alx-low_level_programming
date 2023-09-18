#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* rev_string - reverse the string writtern
* @s: operand
*/

void rev_string(char *s)
{
	int len = strlen(s);
	char *a = s;
	char *b = s + len - 1;

	while (a < b)
	{
		char tmp = *a;
		*a = *b;
		*b = tmp;

		a++;
		b--;
	}
}
