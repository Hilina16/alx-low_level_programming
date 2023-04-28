#include "lists.h"
#include <stdlib.h>
#include <strings.h>
/**
 * free_list - is a function that frees a list_t list.
 * @head: a pointer that contain memory needed to freed
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
