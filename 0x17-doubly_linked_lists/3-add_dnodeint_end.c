#include "lists.h"

/**
 * add_dnodeint_end - add nodde to the end of list
 * @head: the head pointer
 * @n: vinte value of node
 * Return: return node address or null
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
