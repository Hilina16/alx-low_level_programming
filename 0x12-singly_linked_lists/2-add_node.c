#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: is adouble pointer to list_t list
 * @str: is the new string
 * Return: addressof new element or NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int n = 0;

	while (str[n])
		n++;
	tmp = malloc(sizeof(list_t));

	if (!tmp)
		return (NULL);
	tmp->str = strdup(str);
	tmp->len = n;
	tmp->next = *head;
	*head = tmp;
	return (*head);
}
