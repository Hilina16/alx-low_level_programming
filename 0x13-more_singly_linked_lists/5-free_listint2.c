#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_listint2 - is a function that frees a listint_t list.
 * @head: double pointer to head
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		printf("NULL");
	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
