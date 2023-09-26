#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* set_string - set string of a pointer
* @s: pointer to string
* @to: where to copy from
*/

void set_string(char **s, char *to)
{
	*s = to;
}
