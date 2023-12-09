#include "lists.h"

/**
 * dlistint_len - returns lenght of the linked list
 * @h: pointer to the start of list
 * Return: return the number of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *cpy;

	cpy = h;

	while (cpy != NULL)
	{
		cpy = cpy->next;
		len++;
	}

	return (len);
}
