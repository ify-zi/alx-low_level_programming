#include "lists.h"

/**
 * pop_listint - removes the head of the list
 * @head: head of node
 * Return: retuns the int of the node
 */

int pop_listint(listint_t **head)
{
	listint_t *curr;
	int value;

	if (*head == NULL)
		return (0);

	curr = *head;
	*head = curr->next;
	value = curr->n;
	free(curr);
	return (value);
}
