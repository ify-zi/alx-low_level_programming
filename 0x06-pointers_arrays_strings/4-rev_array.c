#include "main.h"
#include <stdio.h>

/**
* reverse_array- reverses a string 9r array
* @a: first ref
* @n: counter
*/

void reverse_array(int *a, int n)
{
	int x;
	int i;

	for (x = 0; x < n / 2; x++)
	{
		i = a[x];
		a[i] = a[n - 1 - x];
		a[n - 1 - x] = i;
	}
}
