#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - print name using another func
* @name: name arg
* @f: the func called
*/

void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (f != NULL))
	{
		(*f)(name);
	}
}
