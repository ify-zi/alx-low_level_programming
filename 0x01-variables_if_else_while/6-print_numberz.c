#include <stdio.h>

/**
* main - start of point
*
* Return: return 0 when success
*/

int main(void)
{
	int n;

	n = 0;
	for (n = 0; n < 10; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
