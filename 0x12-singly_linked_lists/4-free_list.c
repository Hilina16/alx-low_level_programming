#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - is a function that frees a list_t list.
 * @head: the pointerto the allocated memory to be freed
 * Return: Void
 */
void free_list(list_t *head)
{
	list_t *last_node;

	while (head != NULL)
	{
		last_node = head->next;
		free(head);
		head = last_node;
	}
}
