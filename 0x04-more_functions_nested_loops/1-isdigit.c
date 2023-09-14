#include "main.h"
#include <ctype.h>

/**
* _isdigit - checks if value is a digit
* @c: collector of value
*
* Return: returns 1 if success and 0 is fail
*/

int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
