#include "lists.h"

/**
 * sum_listint - sum the int in each node
 * @head: node's head
 * Return: return the sum of integers
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
