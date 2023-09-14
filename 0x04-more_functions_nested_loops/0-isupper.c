#include "main.h"
#include <ctype.h>

/**
* _isupper - checks if character is and uppercase
* @c: takes iin a character
*
* Return: 1 if upper else 0
*/

int _isupper(char c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
