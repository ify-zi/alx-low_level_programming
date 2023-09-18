#include "main.h"
#include <string.h>

/**
* puts_half - return half of thr string
* @str: collect operand
*/

void puts_half(char *str)
{
	int len = strlen(str);
	int n = (len - 1)/2;
	int a;
		
	for (a = n; a < len; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
