#include <stdio.h>

/**
* main - start
*
*Return: rutunr 0
*/
int main(void)
{
	int i;
	char hexDigits[] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
		putchar(hexDigits[i]);
	putchar('\n');
	return (0);
}
