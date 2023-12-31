#include "main.h"

/**
* _pow_recursion - find the pow of x to y
* @x: operand of x
* @y: power value
* Return: return -1 for error
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
