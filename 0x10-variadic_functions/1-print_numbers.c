#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - print num with a separator
* @separator: sperator of numbers
* @n: count of int
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
