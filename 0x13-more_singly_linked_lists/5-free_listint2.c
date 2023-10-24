#include "lists.h"

/**
 * free_listint2 - frees mem block
 * @head: head of node
 */

void free_listint2(listint_t **head)
{
	listint_t *curr;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		curr = (*head)->next;
		free(*head);
		*head = curr;
	}
}
