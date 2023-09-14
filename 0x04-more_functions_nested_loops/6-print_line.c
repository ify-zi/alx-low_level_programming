#include "main.h"

/**
* print_line - prints a straight line
*/

void print_line(int n)
{
	int a;

	if (n != 0)
	{
	a = 0;
	while (a <= n)
	{
		_putchar('_');
		a++;
	}
	}
	_putchar('\n');
}
