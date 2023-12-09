#include "lists.h"

/**
 * sum_dlistint - retunr um of node int
 * @head: the pointer to list
 * Return: retunr sum of list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}

	return (sum);
}
