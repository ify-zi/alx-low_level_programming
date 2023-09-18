#include "main.h"
#include <string.h>

/**
* print_rev - returns the revese of a string
* @s: first operand
*/

void print_rev(char *s)
{
	int len = strlen(s);
	int a;

	for (a = len - 1; a < len; a--)
	{
		if (a >= 0)
		{
			_putchar(s[a]);
		}
		else
			break;
	}
	_putchar('\n');
}
