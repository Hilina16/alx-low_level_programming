#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - This function can free lists with a loop
 * @h: head
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t l = 0;
	int x;
	listint_t *tmp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			l++;
		}
		else
		{
			free(*h);
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
