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
	int i = 0, j = 0;
	int x = 0, y = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	y = i + j;
	s = malloc((sizeof(char) * y) + 1);

	if (s == NULL)
		return (NULL);
	j = 0;

	while (x < 1)
	{
		if (x <= i)
			s[x] = s1[x];
		if (x >= i)
		{
			s[x] = s2[x];
			j++;
		}
		x++;
	}
	s[x] = '\0';
	return (s);
}
