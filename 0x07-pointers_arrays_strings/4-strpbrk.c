#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* *_strpbrk - checks occurrence of a string
* @s: the string
* @accept: thr string
* Return: return the char
*/

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
