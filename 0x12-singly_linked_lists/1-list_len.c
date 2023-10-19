#include "lists.h"

/**
* list_len - return the num of element in a list
* @h: pointer to list
*
* Return: return the len the string
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
