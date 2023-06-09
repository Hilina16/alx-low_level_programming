#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: head pointer
 * @index: is the index of the node, starting at 0
 * Return: the nth node or NULL if not existed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; x++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
