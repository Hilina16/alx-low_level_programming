#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: input width value
 * @height: input height value
 * Return: a pointer 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **h;

	if (width <= 0 || height <= 0)
		return (NULL);
	h = malloc(sizeof(int *) * height);

	if (h == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		h[i] = malloc(sizeof(int) * width);
		if (h[i] == NULL)
		{
			for (; i >= 0; i--)
				free(h[i]);
			free(h);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			h[i][j] = 0;
	}
	return (h);
}
