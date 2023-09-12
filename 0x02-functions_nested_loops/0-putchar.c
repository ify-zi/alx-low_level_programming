#include "main.h"

/**
* main - entry point
*
* Return: returns 0 if successful
*/

int main(void)
{
	char a[] = "_putchar";

	int num;

	for (num = 0; num < 8; num++)
	{
		_putchar(a[num]);
	}
	_putchar('\n');
	return (0);
}
