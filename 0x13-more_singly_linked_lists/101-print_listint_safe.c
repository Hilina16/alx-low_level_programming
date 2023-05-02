#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t loop_listint(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: head pointer
 * Return: number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t no_node, idx = 0;

	no_node = loop_listint(head);
	if (no_node == 0)
	{
		for (; head != NULL; no_node++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (idx = 0; idx < no_node; idx++)
		{
			printf("[%p]%d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p]%d\n", (void *)head, head->n);
	}
	return (no_node);
}

/**
 * loop_listint - counts the no_nodes
 * @head: the head pointer
 * Return: no_nodes else 0
 */
size_t loop_listint(const listint_t *head)
{
	const listint_t *new_list, *tmp;
	size_t no_node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	new_list = head->next;
	tmp = (head->next)->next;
	while (tmp)
	{
		if (new_list == tmp)
		{
			new_list = head;
			while (new_list != tmp)
			{
				no_node++;
				new_list = new_list->next;
				tmp = tmp->next;
			}
			new_list = new_list->next;
			while (new_list != tmp)
			{
				no_node++;
				new_list = new_list->next;
			}
			return (no_node);
		}
		new_list = new_list->next;
		tmp = (tmp->next)->next;
	}
	return (0);
}
