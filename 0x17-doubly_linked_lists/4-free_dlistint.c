#include "lists.h"

/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
	{
		free(head);
	}

	current = head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	while (current->prev != NULL)
	{
		free(current);
		current = current->prev;
	}

	free(current);
}
