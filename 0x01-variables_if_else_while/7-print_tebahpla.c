#include <stdio.h>

/**
* main - start point
*
* Return: this returens zero(0)
*/

int main(void)
{
	char n;

	n = 'z';
	while (n >= 'a')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
