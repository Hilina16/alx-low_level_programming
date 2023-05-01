#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at the end of listint_t
 * @head: the double pointer head
 * @n: the new node to be added at the end
 * Return: adress of new node or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp = *head;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (tmp == NULL)
		*head = new_node;
	else
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	return (new_node);
}
