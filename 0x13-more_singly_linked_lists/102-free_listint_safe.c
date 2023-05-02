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

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		x = *h - (*h)->next;
		if (x > 0)
		{
			tmp = (*h)->next;
			*h = tmp;
			l++;
		}
		else
		{
			*h = NULL;
			l++;
			break;
		}
	}
	*h = NULL;
	return (l);
}
