#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list
 * @head: the double pointer head
 * @index: index of the node that should be deleted.start at 0
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *tmp, *next;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
		return (1);
	}
	tmp = *head;
	for (x = 0; x < index - 1; x++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	next = tmp->next;
	tmp->next = next->next;
	free(next);
	return (1);
}
