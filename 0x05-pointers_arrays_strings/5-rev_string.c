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
	int a;

	for (a = len - 1; a < len; a--)
	{
		if (a >= 0)
		{
			if (s[a] != '\0')
			{
				printf("%c", s[a]);
			}
			else
			{
				continue;
			}
		}
		else
		{
			break;
		}
	}
	printf("\n");
}
