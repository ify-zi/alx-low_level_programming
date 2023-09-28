#include "main.h"

/**
* _sqrt_recursion - retruns the squareroot
* @n: the value needed
* Return: returns the value
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
* _sqrt - tries to guess the sqrt
* @n: the main value
* @k: guessing
* Return: return the value
*/

int _sqrt(int n, int k)
{
	if (n < 0)
		return (-1);
	else if ((k * k) > n)
		return (-1);
	else if ((k * k) == n)
		return (k);
	return (_sqrt(n, k + 1));
}

