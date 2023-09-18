#include "main.h"
#include <string.h>
#include <stdio.h>

/**
* print_array - print a det of array
* @a: point memory location
* @n: array size
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[n - 1]);
		}
	}
	printf("\n");
}
