#include "lists.h"

/**
 * *insert_nodeint_at_index - insert a node at index
 * @head: head of node
 * @idx: the index value
 * @n: int value
 * Return: the new node list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *curr;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
	curr = *head;
	for (; i < idx - 1 && curr != NULL; i++)
		curr = curr->next;
	if (curr == NULL)
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	new_node->next = curr->next;
	curr->next = new_node;
	return (new_node);
}
