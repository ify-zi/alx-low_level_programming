#include "main.h"

/**
* print_alphabet - Prints alphabet in lowercase
*
* Return: alway 0
*/

void print_alphabet(void)
{
	char let;

	let = 'a';
	while (let <= 'z')
	{
		_putchar(let);
		let++;
	}
	_putchar('\n');
}
