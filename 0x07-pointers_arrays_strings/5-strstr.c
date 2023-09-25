#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
* *_strstr - find str in a string
* @haystack: where to search
* @needle: to string to searxh for
* Return: return the char or str
*/

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
