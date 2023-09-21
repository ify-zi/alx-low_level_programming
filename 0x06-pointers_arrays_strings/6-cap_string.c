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
		if (s[i - 1] == 10 || s[i - 1] == 9 || s[i - 1] == 123 
				|| s[i - 1] == 125
				|| (s[i - 1] >= 32 && s[i - 1] <= 64))
		{
			if (!(isdigit(s[i - 1])))
			{
				if (isalpha(s[i]) && islower(s[i]))
				{
					s[i] = toupper(s[i]);
				}
			}
			continue;
		}
	}
	return (s);
}
