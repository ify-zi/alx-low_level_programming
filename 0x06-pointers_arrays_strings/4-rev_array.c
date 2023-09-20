#include "main.h"
#include <stdio.h>

/**
* reverse_array- reverses a string 9r array
* @a: first ref
* @n: counter
*/

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end;
	int temp;

	end = a + n - 1;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
