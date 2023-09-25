#include "main.h"
#include <string.h>

/**
* *_strspn - return the lenght of the prefix of a stringg
* @s: the string to search
* @accept: the prefix search
* Return: returns the lenght
*/

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
