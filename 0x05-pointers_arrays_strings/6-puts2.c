#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* puts2 - skip the even char
* @str: operand
*/

void puts2(char *str)
{
	int a;
	int len = strlen(str);

	for (a = 0; a < len; a++)
	{
		if (a % 2 != 0)
		{
			continue;
		}
		else
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
