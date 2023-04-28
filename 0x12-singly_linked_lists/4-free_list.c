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

	while (last_node = head)
	{
		while (last_node != NULL)
		{
			head = head->next;
			free(last_node->str);
			free(last_node)'
		}
	}
}
