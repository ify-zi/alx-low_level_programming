#include "lists.h"

/**
 * free_listint - free the dynamic mem alloc
 * @head: head node
 */

void free_listint(listint_t *head)
{
	listint_t *curr, *aux;

	curr = head;
	while (curr != NULL)
	{
		aux = curr->next;
		free(curr);
		curr = aux;
	}
}
