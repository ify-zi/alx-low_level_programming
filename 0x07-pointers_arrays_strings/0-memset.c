#include "main.h"
#include <string.h>

/**
* *_memset - set the memory size to a value
* @s: pointer to the dest
* @b: takes the value
* @n: the value size
*
* Return: rturns pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
