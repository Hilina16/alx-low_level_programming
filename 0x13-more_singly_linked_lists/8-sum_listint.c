#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint -  a function that returns the sum of
 * all the data (n) of a listint_t linked list.
 * @head:the head pointer
 * Return: sum of the data or 0 if empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
