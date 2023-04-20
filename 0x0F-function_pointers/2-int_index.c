#include "function_pointers.h"
/**
 * int_index -  a function that searches for an integer.
 * @size: is the number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * @array: input array
 * Return: no element matches, return -1 or size<0 (-1)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
