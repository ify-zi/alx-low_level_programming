#include "lists.h"

/**
* add_node - add aa nod to sinlge list
* @head: takes the head of he code
* @str: name of character
*
* Return: the length of each
*/

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
