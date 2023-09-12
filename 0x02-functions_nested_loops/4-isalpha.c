#include <ctype.h>
#include "main.h"

/**
* _isalpha - checks is letter is an alp
* @c: takes the input
*
* Return: 1 if success 0 if failed
*/

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
