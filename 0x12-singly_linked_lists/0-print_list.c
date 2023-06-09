#include "lists.h"
#include <stdio.h>
/**
 *  print_list - prints all the elements of a list_t list
 *  @h: a pointer to the head of list_t,list
 *  Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t no_node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		no_node++;
	}
	return (no_node);
}
