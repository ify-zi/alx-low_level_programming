#include "main.h"
#include <string.h>

/**
* *_memcpy - copy the number of byte
* @dest: the destination
* @src: the source of the mem size
* @n: size number
*
* Return: retrun the pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
