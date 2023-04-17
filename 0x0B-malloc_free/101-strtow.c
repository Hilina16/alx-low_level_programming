#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * word_count - function that counts words in a string.
 * @s: input string to be evaluated
 * Return: number of total words
 */
int word_count(char *s)
{
	int i = 0, c, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			w++;
		}
	}
	return (w);
}
/**
 * strtow - function that splits a string into words.
 * @str: input string to be splited
 * Return: pointer to an aray of strings.
 */
char **strtow(char *str)
{
	char **m, *t;
	int i, w, s, e;
	int k = 0, c = 0, len = 0;

	while (*(str + len))
		len++;
	w = word_count(str);
	m = (char **) malloc(sizeof(char *) * (w + 1));
	if (w == 0 || m == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				e = i;
				t = (char *) malloc(sizeof(char) * (c + 1));
				if (t == NULL)
					return (NULL);
				while (s < e)
					*t++ = str[s++];
				*t = '\0';
				m[k] = t - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			s = i;
	}
	m[k] = NULL;
	return (m);
}
