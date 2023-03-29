#include "main.h"
/**
 * print_square - prints a square of #
 * @size: the number of # to made a square
 * Return: void
 */
void print_square(int size)
{
	int h, w;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (w = 1; w <= size; w++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	if (size == 0)
		_putchar('\n');
}
