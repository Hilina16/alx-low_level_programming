#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings.
 * @s1: first input
 * @s2: second input
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	int x = 0, y = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	s = malloc(sizeof(char) * (x + y + 1));

	if (s == NULL)
		return (NULL);
	x = y = 0;

	while (s1[x] != '\0')
	{
		s[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		s[x] = s2[y];
		x++, y++;
	}
	s[x] = '\0';
	return (s);
}
