#include "lists.h"

/**
  * listint_len - returns len of nodes
  * @h: struct of head
  * Return: the length
  */

size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *curr;

	curr = h;
	while (curr != NULL)
	{
		curr = curr->next;
		i++;
	}

	return (i);
}
