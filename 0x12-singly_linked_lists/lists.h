#ifndef LIST_H
#define LIST_H
#include <stdlib.h>
#include <string.h>

/**
* struct list_s - singly linked list
* @str: the malloced string
* @len: len of string
* @next: pointer to the next node
*
* Description: singly linked list structure
*/

typedef struct list_s 
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
