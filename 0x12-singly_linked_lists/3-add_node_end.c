#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: is a double pointer to the head of list
 * @str: string to be entered
 * Return: the address of elementor NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *last_node;
	list_t *curr_node;
	size_t n;

	last_node = malloc(sizeof(list_t));
	if (last_node == NULL)
		return (NULL);
	last_node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	last_node->len = n;
	last_node->next = NULL;
	curr_node = *head;
	if (curr_node == NULL)
		*head = last_node;
	else
	{
		while (curr_node->next != NULL)
			curr_node = curr_node->next;
		curr_node->next = last_node;
	}
	return (*head);
}
