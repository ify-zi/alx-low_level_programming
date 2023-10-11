#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* op_add - addition func
* @a: num1
* @b: num2
*
* Return: returns the addition
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub = sbtraction func
* @a: num1
* @b: num2
*
* Return: returns subtraction
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplication func
* @a: num1
* @b: num2
*
* Return: returns mul
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - division func
* @a: num1
* @b: num2
*
* Return: return div
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - modulus func
* @a: num1
* @b: num2
*
* Return: returns div
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
