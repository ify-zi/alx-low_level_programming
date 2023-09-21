#include "main.h"
#include <ctype.h>
#include <string.h>

/**
* *cap_string - capitalise the string in each
* @s: collects the string array
*
* Return: returns the characters
*/

char *cap_string(char *s)
{
	int i;
	int len = strlen(s) - 1;

	for (i = 0; i <= len; i++)
	{
		if (s[i] == 10 || s[i] == 9 || s[i] == 123 || s[i] == 125
				|| (s[i] >= 32 && s[i] <= 64))
		{
			if (!(isdigit(s[i])))
			{
				if (isalpha(s[i + 1]))
				{
					s[i + 1] = toupper(s[i + 1]);
				}
			}
			continue;
		}
	}
	return (s);
}
