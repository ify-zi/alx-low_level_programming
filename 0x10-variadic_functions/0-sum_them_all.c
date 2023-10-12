#include <stdarg.h>
#include "variadic_functions.h"

/**
* sum_them_all - sum numbers of certain number of args
* @n: const count that cant be changed
*
* Return: the sum to all the code
* Description: code take a variable number of args and returns the sum
*/

int sum_them_all(const int n, ...)
{
	int i, sum, num;
	va_list args;
	va_start(args, n);

	if (n == 0)
		return(0);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		sum += num;
	}

	va_end(args);

	return (sum);
}
