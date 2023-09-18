#include "main.h"

/**
* swap_int - swaps the args
* @a: first operand
* @b: second operand
*/

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
