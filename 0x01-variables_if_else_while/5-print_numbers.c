#include <stdio.h>

/**
* main - start point
*
* Return: returns 0 when succesful
*/

int main(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
