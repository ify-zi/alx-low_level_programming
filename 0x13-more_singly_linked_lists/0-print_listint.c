#include "lists.h"

/**
* print_listint - print the list of integers
* @h: root of the list struct
* Return: returns the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *curr;

	curr = h;
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		curr = curr->next;
		i++;
	}

	return (i);
}
