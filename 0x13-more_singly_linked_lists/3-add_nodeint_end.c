#include "lists.h"

/**
 * *add_nodeint_end - adds a node at the ned of the list
 * @head: the head of the node
 * @n: intger
 * Return: retrun mem addr or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *curr;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	curr = *head;
	while (curr->next)
		curr = curr->next;

	curr->next = new_node;

	return (new_node);
}
