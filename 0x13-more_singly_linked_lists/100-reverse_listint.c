#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: double pointer head
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev, *next;

	if (!head || !(*head))
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	rev = NULL;
	while (!(*head))
	{
		next = (*head)->next;
		(*head)->next = rev;
		rev = *head;
		*head = next;
	}
	
	*head = rev;
	return (*head);
}
