#include "main.h"
/**
 * print_diagonal - print diagonals
 * @n: The number of times the character \ should be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int slash, gap;

	if (n > 0)
	{
		for (slash = 0; slash < n; slash++)
		{
			for (gap = 0; gap <= slash; gap++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (slash == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
