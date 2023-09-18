#include "main.h"
#include <string.h>

/**
* puts_half - return half of thr string
* @str: collect operand
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int n;
	int a;

	if (len % 2 == 0)
	{
		n = len / 2;

		for (a = n; a < len; a++)
		{
			_putchar(str[a]);
		}
	}
	else
	{
		n = (len - 1) / 2;

		for (a = n + 1; a < len; a++)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
