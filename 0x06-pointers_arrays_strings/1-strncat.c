#include "main.h"
#include <string.h>

/**
* *_strncat - concatenate strings but uses a maximum
* @dest: destination
* @src: source
* @n: the max byte
*
* Return: return a string
*/

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
