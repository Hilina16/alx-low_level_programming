#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: input value
 * @av: double pointer array
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int x, y;
	int r = 0, l = 0;
	char *str;

	if (ac == 0 || av == 0)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			l++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);

	if (str == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			str[r] = av[x][y];
			r++;
		}
		if (str[r] == '\0')
			str[r++] = '\n';
	}
	return (str);
}
