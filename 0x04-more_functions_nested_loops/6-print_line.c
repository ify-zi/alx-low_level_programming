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
	else if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}
