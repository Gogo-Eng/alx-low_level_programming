#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - returns the  number of nodes in a list
 * @h: linked list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int e;

	for (e = 0; h; e++)
		h = h->next;
	return (e);
}
