#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
listint_t **realloc(listint_t **list, size_t size, listint_t *new);
size_t free_listint_safe(listint_t **h);
/**
 * free_listint_safe - This function can free lists with a loop
 * @h: head
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x, no = 0;
	listint_t **list = NULL;
	listint_t **next;

	if (h == NULL || *h == NULL)
		return (no);
	while (*h != NULL)
	{
		for (x = 0; x < no; x++)
		{
			if (*h == list[x])
			{
				*h = NULL;
				free(list);
				return (no);
			}
		}
		no++;
		list = realloc(list, no, *h);
		next = (*h)->next;
		free(*h);
		*h = next;
	}
	free(list);
	return (no);
}

/**
 * realloc - re allocates memory
 * @list: old list
 * @size: sizeof the new list
 * @new: new node to add listrt
 * Return: pointer to the new list
 */
listint_t **realloc(listint_t **list, size_t size, listint_t *new)
{
	listint_t **new_list;
	size_t i;

	new_list = malloc(size * sizeof(listint_t *));
	if (new_list == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
	{
		new_list[i] = list[i];
	}
	new_list[i] = new;
	free(list);
	return (new_list);
}
