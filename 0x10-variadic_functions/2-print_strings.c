#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
* print_strings - print strings
* @separator: args separator
* @n: args count
* @...: the number
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *c;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != 0)
			printf("%s", separator);
		c = va_arg(args, char *);
		printf("%s", (c == NULL) ? "(nil)" : c);
	}
	printf("\n");
	va_end(args);
}
