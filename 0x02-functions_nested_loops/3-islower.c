#include <ctype.h>
#include "main.h"

/**
* _islower - Checkes if letter is a lowercase
* @c: takes the input to be checked
*
* Return: returns 1
*/

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
