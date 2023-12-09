#include "lists.h"

/**
 * add_dnodeint - add node at beginning
 * @head: pointer to head
 * @n: int at node
 * Return: return address of node or null if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current, *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}

	current = *head;
	new_node->next = current;
	current->prev = current;
	*head = new_node;

	return (new_node);
}
