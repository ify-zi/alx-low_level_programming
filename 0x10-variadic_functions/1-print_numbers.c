#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - print num with a separator
* @separator: sperator of numbers
* @n: count of int
*/

void print_numbers(const char *separator, const int n, ...)
{
	int i;
	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		;
	}
	for (i = 0; i < n; i++)
		printf("%d%s", va_arg(args, int), separator);

	printf("\n");
	va_end(args);
}
