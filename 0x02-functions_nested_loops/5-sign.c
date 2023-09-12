#include "main.h"

/**
* print_sign - checks for the type of int
* @n: take the value to be checked
*
* Return: 1 is positive, 0 if zero and -1 else
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
