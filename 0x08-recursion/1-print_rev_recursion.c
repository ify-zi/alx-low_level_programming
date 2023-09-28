#include "main.h"
#include <string.h>

/**
* _print_rev_recursion - reverse of a string
* @s: string collector
*/

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
