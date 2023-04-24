#include "main.h"
#include <stdlib.h>
char *_memset(char *s, char b, unsigned int n);
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of in the array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
/**
 * _memset - fills mem with constant byte
 * @s: mem area to be filled
 * @b: char to copy
 * @n: numberof times to copy b
 * Return: pointer to the mem area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
