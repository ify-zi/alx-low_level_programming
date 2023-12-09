#include "lists.h"

/**
 * get_dnodeint_at_index - return node val at index
 * @head: the pointer to the list
 * @index: index to be retrieved
 * Return: return null or index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	current = head;

	for (i = 0; current != NULL; i++)
	{
		if (i == index)
			break;
		current = current->next;
	}
	return (current);
}
