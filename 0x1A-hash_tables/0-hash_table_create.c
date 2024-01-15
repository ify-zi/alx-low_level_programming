#include "hash_tables.h"


/**
 * hash_table_create - creates a hash table of size
 * inputted by the user
 * @size: the size of the table
 * Return: returns the pointer to the table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_tab;
	if ((size <= 0) || (size == '\0'))
		return (NULL);
	new_tab = malloc(sizeof(hash_table_t));
	if (new_tab == NULL)
	{
		free(new_tab);
		return (NULL);
	}

	new_tab->size = size;
	new_tab->array = calloc(size, sizeof(hash_node_t));

	return (new_tab);
}
