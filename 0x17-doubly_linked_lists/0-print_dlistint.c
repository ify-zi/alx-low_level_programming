#include "lists.h"

/**
 * print_dlistint - print a double linkd list
 * @h: pointer to the head of list
 * Return: retrun number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *cur;

	cur = h;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		count++;
	}

	return (count);
}
