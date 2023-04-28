#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements
 * in a linked list_t list.
 * @h: a pointer that points to head
 * Return: no_elements
 */
size_t list_len(const list_t *h)
{
	size_t no_elem = 0;

	while (h)
	{
		no_elem++;
		h = h->next;
	}
	return (no_elem);
}
