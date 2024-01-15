#include "hash_tables.h"

/**
 * key_index - func returns the key at index
 * @key: key of the var
 * @size: size of the array
 * Return: return the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key) % size;

	return (index);
}
