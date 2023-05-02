#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: single pointer head
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *f = head;
	listint_t *s = head;

	if (head == NULL)
		return (NULL);
	while (f && s && f->next)
	{
		f = (f->next)->next;
		s = s->next;
		if (s == f)
		{
			s = head;
			while (f != s)
			{
				s = s->next;
				f = f->next;
			}
			return (f);
		}
	}
	return (NULL);
}
