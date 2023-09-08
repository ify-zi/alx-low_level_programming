#include <stdio.h>

/**
* main - starting point
*
* Return: return 0 when successful
*/
int main(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
