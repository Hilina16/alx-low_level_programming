#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: head pointer
 * Return: no of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t no_elem = 0;

	while (h != NULL)
	{
		h = h->next;
		no_elem++;
	}
	return (no_elem);
}
