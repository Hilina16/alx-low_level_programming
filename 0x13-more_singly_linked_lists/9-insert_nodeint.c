#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: double head pointer
 * @idx: the index where the new node is to be added
 * @n: the new node to be added
 * Return: address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new_node;
	unsigned int x;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	if (tmp)
	{
		for (x = 0; x < idx; x++)
			tmp = tmp->next;
		new_node = tmp->next;
		new_node->n = n;
	}
	return (new_node);
}
