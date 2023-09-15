#include <stdio.h>

/**
 * main -  calculate largest prime of 612852475143
 *
 * Return: Success Always
 */


int main(void)
{
	long int i = 612852475143;
	long int a;

	for (a = 2; a < i; a++)
	{
		if (i % a == 0)
		{
			i = i / a;
		}
	}
	printf("%ld\n", a);
	return (0);
}
