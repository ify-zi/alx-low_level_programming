#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at index
 * @head: head of node
 * @index: the index to be return
 * Return:returns the value at point
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int c;

	if (head == NULL)
		return (NULL);

	for (c = 0; c < index; c++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
