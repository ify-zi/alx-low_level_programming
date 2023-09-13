#include "main.h"
#include <stdio.h>

/**
* print_to_98 - print up to 98
* @a: the starting number
*/

void print_to_98(int a)
{
	int n;

	if (a == 98)
	{
		printf("%d, \n", a);
	}
	else if (a != 98)
	{
		if (a > 98)
		{
			n = a;
			while (n >= 98)
			{
				printf("%d, ", n);
				n--;
			}
			printf("\n");
		}
		else if (a < 98)
		{
			n = a;
			while (n <= 98)
			{
				printf("%d, ", n);
				n++;
			}
			printf("\n");
		}
	}
	printf("\n");
}
